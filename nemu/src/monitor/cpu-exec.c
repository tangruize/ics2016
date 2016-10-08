#include "monitor/monitor.h"
#include "monitor/expr.h"
#include "monitor/watchpoint.h"
#include "monitor/set-elf-var.h"
#include "cpu/helper.h"
#include <malloc.h>
#include <setjmp.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INSTR_TO_PRINT 100000

int nemu_state = STOP;

int exec(swaddr_t);

char assembly[80];
char asm_buf[128];

/* Used with exception handling. */
jmp_buf jbuf;

struct {
  bool is_in;
  int index;
  unsigned off;
} in_func={false,0,0};

PartOfStackFrame *bt_first=NULL;

int set_in_func(swaddr_t eip){
  if (func_cnt==0) {
    in_func.is_in=false;
    return 1;
  }
  if (in_func.is_in) {
    if (eip >= all_elf_funcs[in_func.index].end || eip < all_elf_funcs[in_func.index].start) {
      // return
      in_func.is_in=false;
    }
    else {
      in_func.off=(unsigned)eip-(unsigned)all_elf_funcs[in_func.index].start;
    }
  }
  if (!in_func.is_in) {
    int i;
    for (i=0;i<func_cnt;++i) {
      if (eip >= all_elf_funcs[i].start && eip < all_elf_funcs[i].end) {

        // bt
        PartOfStackFrame *p=malloc(sizeof(PartOfStackFrame));
        assert(p!=NULL);
        p->caller_addr=eip;
        strcpy(p->caller_name, all_elf_funcs[in_func.index].str);

        // call
        in_func.is_in=true;
        in_func.index=i;
        in_func.off=(unsigned)eip-(unsigned)all_elf_funcs[in_func.index].start;

        //bt
        strcpy(p->name, all_elf_funcs[in_func.index].str);
        p->args[0] = instr_fetch(cpu.gpr[R_ESP]._32+4, 4);
        p->args[1] = instr_fetch(cpu.gpr[R_ESP]._32+8, 4);
        p->args[2] = instr_fetch(cpu.gpr[R_ESP]._32+12, 4);
        p->args[3] = instr_fetch(cpu.gpr[R_ESP]._32+16, 4);

        p->next=bt_first;
        bt_first=p;

        break;
      }
    }
    if (i==func_cnt) {
      return 1;
    }
  }
  return 0;
}

void print_bin_instr(swaddr_t eip, int len) {
  int i, l=0;
  l = sprintf(asm_buf, "%8x ", eip);
  if (in_func.is_in) {
    l += snprintf(asm_buf + l, 8, "<%s", all_elf_funcs[in_func.index].str);
    l += snprintf(asm_buf + l, 12, "+0x%x>    ", in_func.off);
  }
  else {
    l += sprintf(asm_buf + l, "<UNKNOWN>:   ");
  }
  if (l!=27) {
    l += sprintf(asm_buf + l, "%*s", 27-l, " ");
  }
  for(i = 0; i < len; i ++) {
    l += sprintf(asm_buf + l, "%02x ", instr_fetch(eip + i, 1));
  }
  sprintf(asm_buf + l, "%*.s", 50 - (12 + 3 * len), "");
}

/* This function will be called when an `int3' instruction is being executed. */
void do_int3() {
  printf("\nHit breakpoint at eip = 0x%08x\n", cpu.eip);
  nemu_state = STOP;
}

/* Simulate how the CPU works. */
void cpu_exec(volatile uint32_t n) {
  if(nemu_state == END) {
    printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
    return;
  }
  nemu_state = RUNNING;

  #ifdef DEBUG
  volatile uint32_t n_temp = n;
  #endif

  setjmp(jbuf);

  for(; n > 0; n --) {
    #ifdef DEBUG
    swaddr_t eip_temp = cpu.eip;
    set_in_func(eip_temp);
    if((n & 0xffff) == 0) {
      /* Output some dots while executing the program. */
      fputc('.', stderr);
    }
    #endif

    /* Execute one instruction, including instruction fetch,
     * instruction decode, and the actual execution. */
    int instr_len = exec(cpu.eip);

    cpu.eip += instr_len;

    /* TODO: check watchpoints here. */
    WP *p=head;
    bool is_changed=false;
    for (;p!=NULL;p=p->next) {
        if (p->str==NULL) {
            fprintf(stderr, "Bad watchpoint %d: %s\n", p->NO, p->str);
            continue;
        }
        char str_tmp[32];
        strcpy(str_tmp, p->str);
      bool is_success=true;
        if (!make_token(str_tmp,&is_success,1 )) {
            if (is_success==false) {
            fprintf(stderr, "Bad watchpoint %d: %s\n", p->NO, p->str);
                continue;
            }
        }
      int result=eval_start(&is_success);
      if (is_success==false) {
	fprintf(stderr, "Bad watchpoint %d: %s\n", p->NO, p->str);
      }
      else if (result!=p->key) {
	printf("watchpoint %d: %s\n", p->NO, p->str);
	printf("Old value: %d\nNew value: %d\n", p->key, result);
	is_changed=true;
	p->key=result;
      }
    }
    if (is_changed==true) {
      nemu_state=STOP;
    }

    #ifdef DEBUG
    print_bin_instr(eip_temp, instr_len);
    strcat(asm_buf, assembly);
    Log_write("%s\n", asm_buf);
    if(n_temp < MAX_INSTR_TO_PRINT || is_changed==true) {
      printf("%s\n", asm_buf);
    }
    #endif

    #ifndef DEBUG
    print_bin_instr(eip_temp, instr_len);
    strcat(asm_buf, assembly);
    printf("%s\n", asm_buf);
    #endif


    #ifdef HAS_DEVICE
    extern void device_update();
    device_update();
    #endif

    if(nemu_state != RUNNING) { return; }
  }

  if(nemu_state == RUNNING) { nemu_state = STOP; }
}
