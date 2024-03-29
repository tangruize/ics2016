#include "cpu/exec/template-start.h"

#define instr call


#ifndef __AFTER_LEN__
#define __AFTER_LEN__
static int after_len = 0;
#endif

#ifndef __CALL_INDIRECT__
#define __CALL_INDIRECT__
static int call_indirect = 0;
#endif

static void do_execute() {
  #if DATA_BYTE == 2
  cpu.gpr[R_ESP]._16 -= 2;
  #else
  cpu.gpr[R_ESP]._32 -= 4;
  #endif
  op_dest->type = OP_TYPE_MEM;
  op_dest->addr = REG(R_ESP);
  op_dest->size = DATA_BYTE;
  snprintf(op_dest->str, OP_STR_SIZE, "%s", REG_NAME(R_ESP));
  OPERAND_W(op_dest, cpu.eip + after_len + 1);
  if (call_indirect) {
    cpu.eip = -(after_len + 1);
  }
  cpu.eip = (cpu.eip + op_src->val) & ((DATA_BYTE==2) ? 0x0000FFFF : 0xFFFFFFFF);
  print_asm_template1();
  call_indirect=0;
  //print_asm(str(instr) " %s", op_src->str);
}

#if DATA_BYTE == 2 || DATA_BYTE == 4
make_helper(concat(call_i_, SUFFIX)) {
  after_len = concat(decode_i_, SUFFIX)(eip + 1);
  do_execute();
  return 1 + DATA_BYTE;
}

make_helper(concat(call_rm_, SUFFIX)) {
  after_len = concat(decode_rm_, SUFFIX)(cpu.eip+1);
  //printf("after: %d\n",after_len );
  if (op_src->type==OP_TYPE_REG) {
    snprintf(op_src->str, OP_STR_SIZE, "*%%%s", REG_NAME(op_src->reg));
  }
  call_indirect = 1;
  do_execute();
  return after_len + 1;
}

#endif

#include "cpu/exec/template-end.h"
