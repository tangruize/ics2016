#ifndef __SET_ELF_VAR_H__
#define __SET_ELF_VAR_H__

#define VAR_MAX 256
#define MAX_LEN 128
#define NO_NAME "UNKNOWN"

typedef struct variables {
	char str[MAX_LEN];
	int key;
} variables;

extern variables var[VAR_MAX];
extern int var_cnt;

typedef struct Funcs {
	char str[MAX_LEN];
	unsigned start;
	unsigned end;
}Funcs;

struct PartOfStackFrame {
  swaddr_t caller_addr;
  uint32_t args[4];
  char caller_name[32];
  char name[32];
  struct PartOfStackFrame *next;
};

typedef struct PartOfStackFrame PartOfStackFrame;

extern Funcs all_elf_funcs[VAR_MAX];
extern int func_cnt;
extern PartOfStackFrame *bt_first;

#endif
