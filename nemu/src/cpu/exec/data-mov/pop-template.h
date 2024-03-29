#include "cpu/exec/template-start.h"

#define instr pop

static void do_execute() {
  op_dest->type = OP_TYPE_MEM;
  #if DATA_BYTE == 2
  op_dest->addr = cpu.gpr[R_ESP]._16;
  #else
  op_dest->addr = cpu.gpr[R_ESP]._32;
  #endif
  op_dest->size = DATA_BYTE;
  snprintf(op_dest->str, OP_STR_SIZE, "%s", REG_NAME(R_ESP));
  OPERAND_W(op_src, (uint32_t)swaddr_read(op_dest->addr, DATA_BYTE, R_SS));
  #if DATA_BYTE == 2
  cpu.gpr[R_ESP]._16 += 2;
  #else
  cpu.gpr[R_ESP]._32 += 4;
  #endif
  print_asm_template1();
}

#if DATA_BYTE == 2 || DATA_BYTE == 4
make_helper(concat(pop_r_, SUFFIX)) {
  concat(decode_r_, SUFFIX)(eip);
  do_execute();
  return 1;
}

/*make_helper(concat(pop_m_, SUFFIX)) {
  concat(decode_m_, SUFFIX)(cpu.eip+1);
  print_asm("pop" str(SUFFIX) " 0x%x", (uint32_t)op_src->addr);
  return DATA_BYTE + 1;
}*/

make_instr_helper(rm)
#endif

#include "cpu/exec/template-end.h"
