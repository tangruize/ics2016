#include "cpu/exec/template-start.h"
#include "cpu/set_flags.h"

#define instr test

static void do_execute() {
  DATA_TYPE result = op_dest->val & op_src->val;
	eflags(CF) = 0;
  eflags(OF) = 0;
  eflags(ZF) = set_zf(result);
  eflags(SF) = set_sf(result, DATA_BYTE);
  eflags(PF) = set_pf(result);
  print_asm(str(instr) " %s,%s", op_src->str, op_dest->str);
}

make_instr_helper(r2rm)

#include "cpu/exec/template-end.h"
