#include "cpu/exec/template-start.h"

#define instr pop

static void do_execute() {
  op_dest->type = OP_TYPE_MEM;
  op_dest->addr = REG(R_ESP);
  op_dest->size = DATA_BYTE;
  snprintf(op_dest->str, OP_STR_SIZE, "%s", REG_NAME(R_ESP));
  OPERAND_W(op_src, (uint32_t)swaddr_read(op_dest->addr, DATA_BYTE));
  REG(R_ESP) += ((DATA_BYTE == 2) ? 2 : 4);
  print_asm_template1();
}

#if DATA_BYTE == 2 || DATA_BYTE == 4
make_helper(concat(pop_r_, SUFFIX)) {
  concat(decode_r_, SUFFIX)(eip);
  do_execute();
  return 1;
}

make_helper(concat(pop_m_, SUFFIX)) {
  concat(decode_m_, SUFFIX)(cpu.eip+1);
  print_asm("pop" str(SUFFIX) " 0x%x", (uint32_t)op_src->addr);
  return DATA_BYTE + 1;
}
#endif

#include "cpu/exec/template-end.h"
