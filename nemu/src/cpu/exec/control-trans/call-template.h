#include "cpu/exec/template-start.h"

#define instr call

static void do_execute() {
  REG(R_ESP) -= DATA_BYTE;
  OPERAND_W(op_dest, cpu.eip);
  cpu.eip = (cpu.eip + op_src->val) & ((DATA_BYTE==2) ? 0x0000FFFF : 0xFFFFFFFF);
  print_asm_template1();
  //print_asm(str(instr) " %s", op_src->str);
}

#if DATA_BYTE == 2 || DATA_BYTE == 4
make_helper(concat(call_rel_, SUFFIX)) {
  concat(decode_i_, SUFFIX)(eip + 1);
  op_dest->type = OP_TYPE_MEM;
  op_dest->addr = REG(R_ESP);
  op_dest->size = DATA_BYTE;
  snprintf(op_dest->str, OP_STR_SIZE, "%s", REG_NAME(R_ESP));
  do_execute();
  return 1 + DATA_BYTE;
}
#endif

#include "cpu/exec/template-end.h"
