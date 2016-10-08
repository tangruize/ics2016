#include "monitor/monitor.h"
#include "monitor/expr.h"
#include "monitor/watchpoint.h"
#include "monitor/set-elf-var.h"
#include "nemu.h"

#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

void cpu_exec(uint32_t);

/* We use the `readline' library to provide more flexibility to read from stdin. */
char* rl_gets() {
	static char *line_read = NULL;

	if (line_read) {
		free(line_read);
		line_read = NULL;
	}

	line_read = readline("(nemu) ");

	if (line_read && *line_read) {
		add_history(line_read);
	}

	return line_read;
}

static int cmd_c(char *args) {
	cpu_exec(-1);
	return 0;
}

static int cmd_q(char *args) {
	return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args);

static int cmd_info(char *args);

static int cmd_x(char *args);

static int cmd_w(char *args);

static int cmd_d(char *args);

static int cmd_p(char *args);

static int cmd_b(char *args);

static int cmd_assign(char *args);

static struct {
	char *name;
	char *description;
	int (*handler) (char *);
} cmd_table [] = {
{ "help", "Display informations about all supported commands", cmd_help },
{ "c", "Continue the execution of the program", cmd_c },
{ "q", "Exit NEMU", cmd_q },
{ "si", "Step one instruction exactly.", cmd_si },
{ "info", "Generic command for showing things about the program being debugged.", cmd_info },
{ "x", "Examine memory: x FMT ADDRESS.", cmd_x },
{ "w", "Set a watchpoint for an expression.", cmd_w },
{ "d", "Delete some breakpoints or auto-display expressions", cmd_d},
{ "p", "Print value of expression EXP.", cmd_p},
{ "b", "Set breakpoint at specified line", cmd_b},
{ "assign", "Assign a specific register or memory address", cmd_assign},

/* TODO: Add more commands */

};

#define NR_CMD (sizeof(cmd_table) / sizeof(cmd_table[0]))

static int my_help(const char *args) {
	int i;
	for(i = 0; i < NR_CMD; i ++) {
		if(strcmp(args, cmd_table[i].name) == 0) {
			printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
			return 0;
		}
	}
	printf("Unknown command '%s'\n", args);
	return 0;
}

static int cmd_help(char *args) {
	/* extract the first argument */
	char *arg = strtok(NULL, " ");
	int i;

	if(arg == NULL) {
		/* no argument given */
		for(i = 0; i < NR_CMD; i ++) {
			printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
		}
	}
	else {
		for(i = 0; i < NR_CMD; i ++) {
			if(strcmp(arg, cmd_table[i].name) == 0) {
				printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
				return 0;
			}
		}
		printf("Unknown command '%s'\n", arg);
	}
	return 0;
}

static int cmd_si(char *args) {
	uint32_t n = 1;
	char *arg = strtok(NULL, " ");
	if(arg != NULL) {
		uint32_t getNum = (uint32_t) strtol(arg, NULL, 0);
		if ((int)getNum <= 0) {
			fputs("expected a number greater than 0.\n", stderr);
			return 1;
		}
		n = getNum;
	}
	cpu_exec(n);
	return 0;
}

static char *cpu_name[]={"eax", "ecx", "edx", "ebx", "esp", "ebp", "esi", "edi", "eip"};

static int print_cpu(int reg) {
	if (reg < 0 || reg > 9) {
		return 1;
	}
	else if (reg == 8) {
		printf("%-12s0x%x\t%d\n", cpu_name[reg], cpu.eip, cpu.eip);
	}
	/*else if (reg == R_ESP || reg == R_EBP) {
		printf("%-12s0x%x\t0x%x\n", cpu_name[reg], cpu.gpr[reg]._32, cpu.gpr[reg]._32);
	}*/
	else if (reg==9) {
		printf("%-12s0x%x\t[ ", "eflags", cpu.eflags_init);
		if (eflags(CF)) printf("CF ");
		if (eflags(PF)) printf("PF ");
		if (eflags(ZF)) printf("ZF ");
		if (eflags(SF)) printf("SF ");
		if (eflags(IF)) printf("IF ");
		if (eflags(DF)) printf("DF ");
		if (eflags(OF)) printf("OF ");
		printf("]\n");
	}
	else {
		printf("%-12s0x%x\t%d\n", cpu_name[reg], cpu.gpr[reg]._32, cpu.gpr[reg]._32);
	}
	return 0;
}

static int cmd_info(char *args) {
	char *arg = strtok(args, " ");
	if (arg != NULL) {
		if (strcmp("r", arg) == 0 || strcmp("registers", arg) == 0) {
			int i;
			for (i = 0; i <= 9; ++i) {
				print_cpu(i);
			}
		}
		else if (strcmp("w", arg) == 0 || strcmp("watchpoints", arg) == 0) {
			WP *p=head;
			printf("Num	 Value   What\n");
			for (;p!=NULL;p=p->next) {
				printf("%-8d%-8d%s\n",p->NO, p->key, p->str);
			}
		}
    else if (strcmp("f", arg) == 0 || strcmp("functions", arg) == 0) {
      printf("Name        \tStart   \tEnd\n");
      int i;
      for (i=0;i<func_cnt;++i) {
    		printf("%-12s\t0x%x\t0x%x\n",all_elf_funcs[i].str, all_elf_funcs[i].start, all_elf_funcs[i].end);
    	}
    }
    else if (strcmp("v", arg) == 0 || strcmp("variables", arg) == 0) {
      printf("Name        \tAddress\n");
      int i;
      for (i=0;i<var_cnt;++i) {
    		printf("%-12s\t0x%x\n",var[i].str, (unsigned)var[i].key);
    	}
    }
    else if (strcmp("bt", arg) == 0) {
      if (bt_first==NULL) {
        printf("(NULL)\n");
      }
      else {
        PartOfStackFrame *p=bt_first;
        int counter=0;
        for (;p!=NULL;p=p->next, ++counter) {
          if (p->caller_name[0]=='\0') {
            printf("#%d 0x%x start %s(0x%x, 0x%x, 0x%x, 0x%x)\n", counter, p->caller_addr,
              p->name, p->args[0], p->args[1], p->args[2], p->args[3]);
          }
          else if (p->is_return) {
            printf("#%d 0x%x in %s, return to %s, return val 0x%x\n", counter, p->caller_addr, p->caller_name,
              p->name, p->args[0]);
          }
          else {
            printf("#%d 0x%x in %s, call %s(0x%x, 0x%x, 0x%x, 0x%x)\n", counter, p->caller_addr, p->caller_name,
              p->name, p->args[0], p->args[1], p->args[2], p->args[3]);
          }
        }
      }
    }
		else {
			my_help("info");
			return 1;
		}
	}
	else {
		my_help("info");
		return 1;
	}
	return 0;
}

static int print_addr(int n, swaddr_t addr) {
	int i;
	for (i = 0; i < n; ++i) {
		if (i % 4 == 0) {
			printf("0x%x:\t", (uint32_t)addr);
		}
		printf("0x%08x\t", (uint32_t)swaddr_read(addr, 4));
		if (i % 4 == 3) {
			fputc('\n', stdout);
		}
		addr += 4;
	}
	if (i % 4 != 0) {
		fputc('\n', stdout);
	}
	return 0;
}

static int cmd_x(char *args) {
	char *arg1 = strtok(NULL, " ");
	//  printf("%s\n", arg1);
	char *arg2 = NULL;
	if (arg1 != NULL) {
		arg2 = strtok(NULL, " ");
	}
	int n = 1;
	uint32_t getAddr;
	if (arg1 == NULL) {
		my_help("x");
		return 1;
	}
	else if (arg2 != NULL)
	{
		int getNum = (int) strtol(arg1, NULL, 0);
		bool is_success=true;
		getAddr = (uint32_t) express(arg2, &is_success);
		//printf("%s\n", arg2);
		if (getNum <= 0 || is_success==false) {
			if (getNum <= 0) {
				fputs("Bad expression\n", stderr);
			}
			return 1;
		}
		n = getNum;
	}
	else
	{
		bool is_success=true;
		getAddr = (uint32_t) express(arg1, &is_success);
		if (is_success==false) {
			//fputs("Bad expression\n", stderr);
			return 1;
		}
	}
	print_addr(n, getAddr);
	return 0;
}

static int cmd_w(char *args) {
	//char *arg = strtok(NULL, " ");
	bool is_success=true;
	if (args==NULL) {
		char w[]="w";
		cmd_info(w);
		return 0;
	}
	if(!make_token(args, &is_success,1)) {
		if (is_success==false) {
			fputs("Invalid expression!\n" ,stderr);
		}
		return 1;
	}
	int result=eval_start(&is_success);
	if (is_success==false) {
		return 1;
	}
	WP *p=new_wp();
	if (p==NULL) {
		return 2;
	}
	p->key=result;
	strcpy(p->str, args);
	printf("watchpoint %d: %s\n", p->NO, p->str);
	return 0;
}

static int cmd_d(char *args) {
	char *arg = strtok(NULL, " ");
	if (arg==NULL)
	{
		my_help("d");
		return 0;
	}
	int getNum = (int) strtol(arg, NULL, 0);
	if (getNum <= 0) {
		fputs("expected numbers greater than 0.\n", stderr);
		return 1;
	}
	return free_wp(getNum);
}

static int cmd_p(char *args) {
	if (args==NULL)
	{
		my_help("p");
		return 0;
	}
	bool is_success=true;
	expr(args, &is_success, 1);
	if (is_success==true) {
		return 0;
	}
	else {
		return 1;
	}
}

static int cmd_b(char *args) {
	//char *arg = strtok(NULL, " ");
	if (args==NULL)
	{
		my_help("b");
		return 0;
	}
	char str[32];
	strcpy(str, "$eip==");
	//printf("%s\n", str);
	strcat(str, args);
	//printf("%s\n",str);
	return cmd_w(str);
}

static int cmd_assign(char *args) {
	char *arg1 = strtok(NULL, "=");
	char *arg2 = NULL;
	if (arg1!=NULL) {
		arg2 = arg1+1+strlen(arg1);
	}
	if (arg2==NULL) {
		fprintf(stderr, "%s\n", "Bad expression!");
		return 0;
	}
	bool is_success=true;
	uint32_t result2=(uint32_t)express(arg2, &is_success);
	if (is_success) {
		make_token(arg1, &is_success, 1);
		if (nr_token==3) {
			if (tokens[1].type==14) {
				tokens[0].value+=tokens[2].value;
			}
			else if (tokens[1].type==15) {
				tokens[0].value-=tokens[2].value;
			}
			else {
				fprintf(stderr, "%s\n", "Bad expression!");
				return 0;
			}
			swaddr_write((swaddr_t)tokens[0].value, 4, result2);
		}
		else if (nr_token==1) {
			if (tokens[0].type==260) {
				switch (tokens[0].str[2]) {
				case 'a':cpu.eax=result2;break;
				case 'c':cpu.ecx=result2;break;
				case 'd':cpu.gpr[tokens[0].str[3]=='x'?2:7]._32=result2;break;
				case 'b':cpu.gpr[tokens[0].str[3]=='x'?3:5]._32=result2;break;
				case 's':cpu.gpr[tokens[0].str[3]=='p'?4:6]._32=result2;break;
				case 'i':cpu.eip=result2;break;
				default :assert(0);
				}
			}
			else if (tokens[0].type==257 ||tokens[0].type== 258) {
				swaddr_write((swaddr_t)tokens[0].value, 4, result2);
			}
		}
	}
	else {
		fprintf(stderr, "%s\n", "Bad expression!");
		return 0;
	}
	return 0;
}

void ui_mainloop() {
	while(1) {
		char *str = rl_gets();
		if (str==NULL)
		{
			printf("exit\n");
			return;
		}
		char *str_end = str + strlen(str);
		/* extract the first token as the command */
		char *cmd = strtok(str, " ");
		if(cmd == NULL) { continue; }

		/* treat the remaining string as the arguments,
	 * which may need further parsing
	 */
		char *args = cmd + strlen(cmd) + 1;
		if(args >= str_end) {
			args = NULL;
		}

#ifdef HAS_DEVICE
		extern void sdl_clear_event_queue(void);
		sdl_clear_event_queue();
#endif

		int i;
		for(i = 0; i < NR_CMD; i ++) {
			if(strcmp(cmd, cmd_table[i].name) == 0) {
				if(cmd_table[i].handler(args) < 0) { return; }
				break;
			}
		}
		if(i == NR_CMD) {
			bool success=true;
			int len=0;
			if (args!=NULL) {
				len=strlen(cmd);
				//strcat(str, args);
				cmd[len]=' ';
			}
			expr(str,&success,0);
			if (success==false) {
				if (len!=0) {
					cmd[len]='\0';
				}
				printf("Unknown command '%s'\n", cmd);
			}
		}
	}
}
