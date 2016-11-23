#include "cpu/exec/template-start.h"

#define instr jmp

#ifndef __JMP_INDIRECT__
#define __JMP_INDIRECT__
static int jmp_indirect_len = 0;
#endif

static void do_execute() {
  //printf("%s\n", op_src->type == OP_TYPE_REG ? "reg" : "mem" );
  cpu.eip = ((int32_t)cpu.eip + (int32_t)op_src->val - jmp_indirect_len) & ((DATA_BYTE==2) ? 0x0000FFFF : 0xFFFFFFFF);
  jmp_indirect_len = 0;
  print_asm_template1();
}

#if DATA_BYTE == 1
make_instr_helper(si)
#endif
#if DATA_BYTE == 2 || DATA_BYTE == 4
make_instr_helper(i)
make_helper(concat(jmp_rm_, SUFFIX)) {
  int len = concat(decode_rm_, SUFFIX)(cpu.eip+1);
  /*#if DATA_BYTE == 2
  op_src->val=(uint16_t)instr_fetch((swaddr_t)op_src->val, DATA_BYTE);
  #else
  op_src->val=(uint32_t)instr_fetch((swaddr_t)op_src->val, DATA_BYTE);
  #endif*/
  if (op_src->type==OP_TYPE_REG) {
    snprintf(op_src->str, OP_STR_SIZE, "*%%%s", REG_NAME(op_src->reg));
  }
  cpu.eip = 0;
  jmp_indirect_len = len + 1;
  do_execute();
  return len + 1;
}
#endif
#if DATA_BYTE == 4
make_helper(jmp_ptr)  {
  decode_i_l(cpu.eip+1);
  cpu.eip = (int32_t)op_src->val - 7;
  return 7;
}
#endif

#include "cpu/exec/template-end.h"
