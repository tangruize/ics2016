#include "cpu/exec/template-start.h"

#define instr scas

make_helper(concat(scas_, SUFFIX))  {
  op_src->type=OP_TYPE_MEM;
  op_src->size=DATA_BYTE;
  #if DATA_BYTE == 2
  op_src->addr=(swaddr_t)cpu.gpr[R_EDI]._16;
  #else
  op_src->addr=(swaddr_t)cpu.gpr[R_EDI]._32;
  #endif
  op_src->val=swaddr_read(op_src->addr, op_src->size);

  op_dest->type=OP_TYPE_REG;
  op_dest->size=DATA_BYTE;
  op_dest->reg=R_EAX; // the number is 0, exactly.
  op_dest->val=REG(R_EAX);

  #if DATA_BYTE == 2
  uint16_t tmp = op_dest->val - op_src->val;
  #else
  uint32_t tmp = (int)op_dest->val - (int)op_src->val;
  #endif
  eflags(SF) = set_sf(tmp, (DATA_BYTE==2?2:4));
  eflags(ZF) = set_zf(tmp);
  eflags(PF) = set_pf(tmp);
  if (op_src->val) {
    eflags(CF) = !set_cf((unsigned)op_dest->val, (unsigned)-op_src->val, (DATA_BYTE==2?2:4));
  }
  else {
    eflags(CF) = 0;
  }
  eflags(OF) = set_sub_of((int)op_dest->val, (int)op_src->val, (DATA_BYTE==2?2:4));
  print_asm_template2();
  return 1;
}

#include "cpu/exec/template-end.h"
