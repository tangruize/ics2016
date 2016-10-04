#include "cpu/exec/template-start.h"

#define instr push

static void do_execute() {
  REG(R_ESP) -= ((DATA_BYTE == 2) ? 2 : 4);
  op_dest->type = OP_TYPE_MEM;
  op_dest->addr = REG(R_ESP);
  op_dest->size = DATA_BYTE;
  snprintf(op_dest->str, OP_STR_SIZE, "%s", REG_NAME(R_ESP));
  OPERAND_W(op_dest, op_src->val);
  print_asm_template1();
  //print_asm(str(instr) " %s", op_src->str);
}

make_instr_helper(i)

#if DATA_BYTE == 2 || DATA_BYTE == 4
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
