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
make_instr_helper(r)

make_helper(concat(pop_m_, SUFFIX)) {
  op_src->type = OP_TYPE_MEM;
  op_src->addr = (uint32_t)swaddr_read(cpu.eip + 1, DATA_BYTE);
  op_src->size = DATA_BYTE;
  print_asm("pop" str(SUFFIX) " 0x%x", (uint32_t)op_src->addr);
  return DATA_BYTE + 1;
}
#endif

#include "cpu/exec/template-end.h"
