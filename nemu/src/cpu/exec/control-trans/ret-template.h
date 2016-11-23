#include "cpu/exec/template-start.h"

#define instr ret

#ifndef __HAS_I__
#define __HAS_I__
static bool has_i = false;
#endif

#ifndef __AFTER_LEN__
#define __AFTER_LEN__
static int after_len = 0;
#endif

static void do_execute() {
  uint32_t tmp = (uint32_t)swaddr_read(REG(R_ESP), DATA_BYTE, R_SS);
  cpu.eip = (tmp - after_len) & ((DATA_BYTE==2) ? 0x0000FFFF : 0xFFFFFFFF);
  #if DATA_BYTE == 2
  cpu.gpr[R_ESP]._16 += 2;
  #else
  cpu.gpr[R_ESP]._32 += 4;
  #endif
  if (has_i) {
    #if DATA_BYTE == 2
    cpu.gpr[R_ESP]._16  += op_src->val;
    #else
    cpu.gpr[R_ESP]._32  += op_src->val;
    #endif
    print_asm_template1();
  }
  else {
    print_asm(str(instr) str(SUFFIX));
  }
  has_i = false;
}

#if DATA_BYTE == 2 || DATA_BYTE == 4
make_helper(concat(ret_, SUFFIX)) {
  after_len = 1;
  do_execute();
  return 1;
}

make_helper(concat(ret_i_, SUFFIX)) {
  has_i = true;
  op_src->type = OP_TYPE_IMM;
  op_src->imm = (uint32_t)swaddr_read(cpu.eip + 1, 2, R_CS);
  op_src->val = op_src->imm;
  snprintf(op_src->str, OP_STR_SIZE, "$0x%x", op_src->imm);
  after_len = 3;
  do_execute();
  return 3;
}
#endif

#include "cpu/exec/template-end.h"
