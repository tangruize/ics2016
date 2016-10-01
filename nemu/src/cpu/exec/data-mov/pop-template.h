#include "cpu/exec/template-start.h"

#define instr pop

static void do_execute() {
  op_dest->type = OP_TYPE_MEM;
  op_dest->addr = REG(R_ESP);
  op_dest->size = DATA_BYTE;
  snprintf(op_dest->str, OP_STR_SIZE, "%s", REG_NAME(op_dest->reg));
  OPERAND_W(op_src, op_dest->val);
}
