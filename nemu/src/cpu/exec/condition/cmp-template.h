#include "cpu/exec/template-start.h"
#include "cpu/set_flags.h"
#include "cpu/decode/modrm.h"

#define instr cmp

static void do_execute() {
  uint32_t tmp = (int32_t)op_dest->val - (int32_t) op_src->val;
  eflags(SF) = set_sf(tmp, DATA_BYTE);
  eflags(ZF) = set_zf(tmp);
  eflags(PF) = set_pf(tmp);
  eflags(CF) = set_cf(op_dest->val, op_src->val, DATA_BYTE);
  eflags(OF) = set_of(op_dest->val, op_src->val, DATA_BYTE);
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
