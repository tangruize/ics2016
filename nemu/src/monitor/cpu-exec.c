#include "monitor/monitor.h"
#include "monitor/expr.h"
#include "monitor/watchpoint.h"
#include "monitor/set-elf-var.h"
#include "cpu/helper.h"
#include "cpu/raise_intr.h"
#include "device/i8259.h"
#include <malloc.h>
#include <setjmp.h>
#include <stdlib.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INSTR_TO_PRINT 1000

int nemu_state = STOP;

int exec(swaddr_t);

char assembly[80];
char asm_buf[128];

/* Used with exception handling. */
jmp_buf jbuf;

struct in_func {
	bool is_in;
	int index;
	unsigned off;
} in_func={false,0,0};

static bool is_return=false;

PartOfStackFrame *bt_first=NULL;

bool set_finish = false;
static int call_cnt = 0;

static int set_next_call = 0;

static int pre_index_func=0;

static int pre_eip=0x100000;

unsigned till_now_si=0;

int set_in_func(swaddr_t eip){
	if (func_cnt==0) {
		in_func.is_in=false;
		return 1;
	}

	if (in_func.is_in) {
		if (eip >= all_elf_funcs[in_func.index].end || eip < all_elf_funcs[in_func.index].start) {
			in_func.is_in=false;
		}
		else {
			in_func.off=(unsigned)eip-(unsigned)all_elf_funcs[in_func.index].start;
		}
	}

	if (!in_func.is_in || is_return || set_next_call) {
		int i;
		for (i=0;i<func_cnt;++i) {
			if (eip >= all_elf_funcs[i].start && eip < all_elf_funcs[i].end) {
				if (is_return || set_next_call) {
					// bt
					PartOfStackFrame *p=malloc(sizeof(PartOfStackFrame));
					assert(p!=NULL);
					p->caller_addr=pre_eip;
					p->is_return=is_return;
					if (set_finish && !is_return) {
						++call_cnt;
					}
					strcpy(p->caller_name, all_elf_funcs[in_func.index].str);
					strcpy(p->name, all_elf_funcs[i].str);
					if (is_return) {
						p->args[0] = cpu.gpr[R_EAX]._32;
					}
					else {
						p->args[0] = instr_fetch(cpu.gpr[R_ESP]._32+4, 4);
						p->args[1] = instr_fetch(cpu.gpr[R_ESP]._32+8, 4);
						p->args[2] = instr_fetch(cpu.gpr[R_ESP]._32+12, 4);
						p->args[3] = instr_fetch(cpu.gpr[R_ESP]._32+16, 4);
					}

					p->next=bt_first;
					bt_first=p;

					is_return=false;
					set_next_call=0;
				}

				in_func.is_in=true;
				in_func.index=i;
				in_func.off=(unsigned)eip-(unsigned)all_elf_funcs[in_func.index].start;

				break;
			}
		}
		if (i==func_cnt) {
			return 1;
		}
	}

	uint8_t next_instr=(uint8_t)instr_fetch(eip, 1);

	if (next_instr==0xf3) {
		next_instr=(uint8_t)instr_fetch(eip+1, 1);
	}
	if (next_instr==0xc2 || next_instr==0xc3) {
		is_return = true;
		pre_eip=eip;
		if (set_finish) {
			if (call_cnt==0) {
				nemu_state = STOP;
				set_finish=false;
				call_cnt=1;
			}
			--call_cnt;
		}
	}

	if (next_instr==0xe8 || (next_instr == 0xff && (instr_fetch(eip+1, 1) & 0x30) == 0x10)) {
		set_next_call = 1;
		pre_eip=eip;
		pre_index_func=in_func.index;
	}
	return 0;
}

void print_bin_instr(swaddr_t eip, int len) {
	int i, l=0;
	l = sprintf(asm_buf, "%8x ", eip);
	if (in_func.is_in) {
		char tmp_str[12];
		strncpy(tmp_str, all_elf_funcs[in_func.index].str, 12);
		tmp_str[11]='\0';
		l += sprintf(asm_buf + l, "<%s", tmp_str);
		/*printf("%s\n", asm_buf);
		printf("%d\n",l );*/
		l += snprintf(asm_buf + l, 12, "+0x%x> ", in_func.off);
		/*printf("%s\n", asm_buf);
		printf("%d\n",l );*/
		//printf("%s\n", asm_buf);
	}
	else {
		l += sprintf(asm_buf + l, "<UNKNOWN>   ");
	}
	//printf("%d\n", l);
	if (l!=33) {
		l += sprintf(asm_buf + l, "%*s", 33-l, "");
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
	//printf("%d\n", nemu_state);
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
		if((n & 0xffff) == 0) {
			/* Output some dots while executing the program. */
			fputc('.', stderr);
		}
#endif

		// bt needs set_in_func
#ifdef DEBUG
		set_in_func(eip_temp);
#endif


		/* Execute one instruction, including instruction fetch,
	 * instruction decode, and the actual execution. */
		int instr_len = exec(cpu.eip);

		cpu.eip += instr_len;

		++till_now_si;


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
				is_changed=true;
				if (!p->is_break) {
					printf("watchpoint %d: %s\n", p->NO, p->str);
					printf("Old value: %d\nNew value: %d\n", p->key, result);
					printf("si %d\n", till_now_si);
					p->key=result;
				}
				else {
					printf("Hit breakpoint %d: %s\n", p->NO, p->str+6);
					printf("si %d\n", till_now_si);
					nemu_state = STOP;
					p->key=0;
				}
			}
		}
		if (is_changed==true) {
			nemu_state=STOP;
		}

#ifdef DEBUG
		print_bin_instr(eip_temp, instr_len);
		strcat(asm_buf, assembly);
		Log_write("%-110s  si %d\n", asm_buf, till_now_si);
		if(n_temp < MAX_INSTR_TO_PRINT || is_changed==true) {
			printf("%-110s si %d\n", asm_buf, till_now_si);
		}
#endif

		/*#ifndef DEBUG
		print_bin_instr(eip_temp, instr_len);
		strcat(asm_buf, assembly);
		printf("%s\n", asm_buf);
#endif*/


#ifdef HAS_DEVICE
		extern void device_update();
		device_update();
#endif

		if(nemu_state != RUNNING) { return; }
		if(cpu.INTR	&	eflags(IF)) {
	 		uint32_t intr_no	=	i8259_query_intr();
	 		i8259_ack_intr();
	 		raise_intr(intr_no);
		}
	}

	if(nemu_state == RUNNING) { nemu_state = STOP; }
}
