#include "cpu/exec/template-start.h"

#define instr movsx

#if DATA_BYTE == 2 || DATA_BYTE ==4
static void do_execute() {
  DATA_TYPE_S tmp = (DATA_TYPE_S)op_src->val;
  OPERAND_W(op_dest, tmp);
  print_asm_template2();
}

make_instr_helper(rmb2r)

#endif

#if DATA_BYTE == 4
make_instr_helper(rmw2r)
#endif

#include "cpu/exec/template-end.h"
