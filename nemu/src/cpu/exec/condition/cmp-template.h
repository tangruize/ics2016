#include "cpu/exec/template-start.h"
#include "cpu/set_flags.h"
#include "cpu/decode/modrm.h"

#define instr cmp

static void do_execute() {
  #if DATA_BYTE == 2
  uint16_t tmp = op_dest->val - op_src->val;
  #else
  uint32_t tmp = (int)op_dest->val - (int)op_src->val;
  #endif
  eflags(SF) = set_sf(tmp, DATA_BYTE);
  eflags(ZF) = set_zf(tmp);
  eflags(PF) = set_pf(tmp);
  if (op_src->val) {
    eflags(CF) = !set_cf((unsigned)op_dest->val, (unsigned)-op_src->val, DATA_BYTE);
  }
  else {
    eflags(CF) = 0;
  }
  /*if (op_src->val == 0x80000000) {
      eflags(OF) = 1;
  }
  else {*/
  eflags(OF) = set_sub_of((int)op_dest->val, (int)op_src->val, DATA_BYTE);
  /*}*/
  print_asm_template2();
}

make_instr_helper(i2a)
make_instr_helper(i2rm)
make_instr_helper(r2rm)
make_instr_helper(rm2r)
#if DATA_BYTE == 2 || DATA_BYTE == 4
make_instr_helper(si2rm)
#endif

#include "cpu/exec/template-end.h"
