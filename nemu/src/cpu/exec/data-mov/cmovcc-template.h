#include "cpu/exec/template-start.h"


#if DATA_BYTE == 2 || DATA_BYTE == 4

static void do_execute() {
  if (cc_func())
  {
    OPERAND_W(op_dest, op_src->val);
  }
	print_asm_template2();
}

make_instr_helper(rm2r)

#endif

#include "cpu/exec/template-end.h"
