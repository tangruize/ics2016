#include "cpu/exec/template-start.h"

#define instr leave

#if DATA_BYTE == 2 || DATA_BYTE == 4

static void do_execute() {
  REG(R_ESP) = REG(R_EBP);
  op_src->type = OP_TYPE_REG;
  op_src->reg = R_EBP;
  op_src->size = DATA_BYTE;
  OPERAND_W(op_src, (uint32_t)swaddr_read((swaddr_t)REG(R_ESP), DATA_BYTE));
  print_asm(str(instr));
}

make_helper(concat(leave_, SUFFIX)) {
  do_execute();
  return 1;
}
#endif

#include "cpu/exec/template-end.h"
