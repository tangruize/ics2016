#include "cpu/exec/template-start.h"

#define instr stos

make_helper(concat(stos_, SUFFIX)) {
  op_dest->type=OP_TYPE_MEM;

  op_dest->size=DATA_BYTE;
  #if DATA_BYTE == 2
  op_dest->addr=(swaddr_t)cpu.gpr[R_EDI]._16;
  #else
  op_dest->addr=(swaddr_t)cpu.gpr[R_EDI]._32;
  #endif
  //op_dest->val=swaddr_read(rm->addr, rm->size);

  op_src->type=OP_TYPE_REG;
  op_src->size=DATA_BYTE;
  op_src->reg=R_EAX; // the number is 0, exactly.
  op_src->val=REG(R_EAX);

	OPERAND_W(op_dest, op_src->val);

  #if DATA_BYTE == 2
  cpu.gpr[R_EDI]._16 += (eflags(DF) ? -DATA_BYTE : DATA_BYTE);
  #else
  cpu.gpr[R_EDI]._32 += (eflags(DF) ? -DATA_BYTE : DATA_BYTE);
  #endif

	print_asm_template2();
  return 1;
}
#include "cpu/exec/template-end.h"
