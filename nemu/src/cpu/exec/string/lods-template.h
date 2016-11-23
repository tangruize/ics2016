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
  op_src->val=swaddr_read(op_src->addr, op_src->size, R_DS);

  op_dest->type=OP_TYPE_REG;
  op_dest->size=DATA_BYTE;
  op_dest->reg=R_EAX; // the number is 0, exactly.

	OPERAND_W(op_dest, op_src->val);

  #if DATA_BYTE == 2
  cpu.gpr[R_ESI]._16 += (eflags(DF) ? -DATA_BYTE : DATA_BYTE);
  #else
  cpu.gpr[R_ESI]._32 += (eflags(DF) ? -DATA_BYTE : DATA_BYTE);
  #endif

  sprintf(op_src->str, "%s%#x", ((int)op_src->val < 0 ? "-" : ""), ((int)op_src->val < 0 ? (int)-op_src->val : (int)op_src->val));

	print_asm_template2();
  return 1;
}
#include "cpu/exec/template-end.h"
