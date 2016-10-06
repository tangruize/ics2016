#include "cpu/exec/template-start.h"

#define instr lods

make_helper(concat(lods_, SUFFIX)) {
  op_src->type=OP_TYPE_MEM;

  op_src->size=DATA_BYTE;
  #if DATA_BYTE == 2
  op_src->addr=(swaddr_t)cpu.gpr[R_ESI]._16;
  #else
  op_src->addr=(swaddr_t)cpu.gpr[R_ESI]._32;
  #endif
  op_src->val=swaddr_read(op_src->addr, op_src->size);

  op_dest->type=OP_TYPE_REG;
  op_dest->size=DATA_BYTE;
  op_dest->reg=R_EAX; // the number is 0, exactly.

	OPERAND_W(op_dest, op_src->val);
	print_asm_template2();
  return 1;
}
#include "cpu/exec/template-end.h"
