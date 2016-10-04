#include "cpu/exec/template-start.h"

#if DATA_BYTE == 1
static void do_execute() {
  OPERAND_W(op_src, cc_func());
  print_asm_template1();
}

make_instr_helper(rm)
#endif
#include "cpu/exec/template-end.h"
