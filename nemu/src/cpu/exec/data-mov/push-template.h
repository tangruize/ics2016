#include "cpu/exec/template-start.h"

#define instr push

static void do_execute() {
  REG(R_ESP) -= DATA_BYTE;
  OPERAND_W(op_dest, op_src->val);
  print_asm(str(instr) " %s", op_src->str);
}

#if DATA_BYTE == 2 || DATA_BYTE == 4
make_helper(concat(push_r_, SUFFIX)) {
  concat(decode_r_, SUFFIX)(eip);
  op_dest->type = OP_TYPE_MEM;
  op_dest->addr = R_ESP;
  op_dest->size = DATA_BYTE;
  snprintf(op_dest->str, OP_STR_SIZE, "%s", REG_NAME(op_src->reg));
  do_execute();
  return 1;
}
#endif

#include "cpu/exec/template-end.h"
