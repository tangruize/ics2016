#include "cpu/exec/template-start.h"

#define instr push

static void do_execute() {
  #if DATA_BYTE == 2
  cpu.gpr[R_ESP]._16 -= 2;
  op_dest->addr = cpu.gpr[R_ESP]._16;
  #else
  cpu.gpr[R_ESP]._32 -= 4;
  op_dest->addr = cpu.gpr[R_ESP]._32;
  #endif
  op_dest->type = OP_TYPE_MEM;
  op_dest->size = (DATA_BYTE == 2 ? 2 : 4);
  snprintf(op_dest->str, OP_STR_SIZE, "%s", REG_NAME(R_ESP));
  OPERAND_W(op_dest, op_src->val);
  print_asm_template1();
  //print_asm(str(instr) " %s", op_src->str);
}

#if DATA_BYTE == 1
make_instr_helper(si)
#endif

#if DATA_BYTE == 2 || DATA_BYTE == 4
make_instr_helper(i)

make_helper(concat(push_r_, SUFFIX)) {
  concat(decode_r_, SUFFIX)(cpu.eip);
  do_execute();
  return 1;
}

/*
make_helper(concat(push_m_, SUFFIX)) {
  concat(decode_m_, SUFFIX)(cpu.eip+1);
  print_asm("push" str(SUFFIX) " 0x%x", (uint32_t)op_src->addr);
  return DATA_BYTE + 1;
}*/

make_instr_helper(rm)

#endif

#include "cpu/exec/template-end.h"
