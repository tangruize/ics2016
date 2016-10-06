#include "cpu/exec/template-start.h"

#define instr movs

make_helper(concat(movs_, SUFFIX)) {
  op_src->type=OP_TYPE_REG;
  op_src->reg=R_ESI;
  op_src->val=(uint32_t)cpu.gpr[R_ESI]._32;
  op_dest->type=OP_TYPE_REG;
  op_dest->reg=R_EDI;
	OPERAND_W(op_dest, op_src->val);
	print_asm_template2();
  return 1;
}
#include "cpu/exec/template-end.h"
