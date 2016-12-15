#include "cpu/exec/template-start.h"

make_helper(concat(in_,SUFFIX)) {
  op_dest->type = OP_TYPE_REG;
  op_dest->reg = R_EAX;
  OPERAND_W(op_dest, pio_read(cpu.gpr[R_EDX]._16, DATA_BYTE));
  return 1;
}

#include "cpu/exec/template-end.h"
