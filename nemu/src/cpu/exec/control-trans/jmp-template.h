#include "cpu/exec/template-start.h"

#define instr jmp

static void do_execute() {
  //printf("%s\n", op_src->type == OP_TYPE_REG ? "reg" : "mem" );
  cpu.eip = ((int32_t)cpu.eip + (int32_t)op_src->val) & ((DATA_BYTE==2) ? 0x0000FFFF : 0xFFFFFFFF);
  print_asm_template1();
}

#if DATA_BYTE == 1
make_instr_helper(si)
#endif
#if DATA_BYTE == 2 || DATA_BYTE == 4
make_instr_helper(i)
make_helper(concat(jmp_rm_, SUFFIX)) {
  int len = concat(decode_rm_, SUFFIX)(cpu.eip+1);
  #if DATA_BYTE == 2
  op_src->val=(uint16_t)instr_fetch((swaddr_t)op_src->val, DATA_BYTE);
  #else
  op_src->val=(uint32_t)instr_fetch((swaddr_t)op_src->val, DATA_BYTE);
  #endif
  return len + 1;
}
#endif

#include "cpu/exec/template-end.h"
