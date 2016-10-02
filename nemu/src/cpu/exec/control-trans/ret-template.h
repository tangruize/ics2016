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
  uint32_t tmp = (uint32_t)swaddr_read(REG(R_ESP) + (has_i ? op_src->val : 0), DATA_BYTE);
  cpu.eip = (tmp - after_len) & ((DATA_BYTE==2) ? 0x0000FFFF : 0xFFFFFFFF);
  if (has_i) {
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
  op_src->imm = (uint32_t)swaddr_read(cpu.eip + 1, 2);
  op_src->val = op_src->imm;
  snprintf(op_src->str, OP_STR_SIZE, "$0x%x", op_src->imm);
  after_len = 3;
  do_execute();
  return 3;
}
#endif

#include "cpu/exec/template-end.h"
