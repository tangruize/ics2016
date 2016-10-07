#include "cpu/exec/template-start.h"

static void do_execute() {
  #ifdef __ADC__
  op_src->val = (int)op_src->val + (int)eflags(CF);
  #endif
  #if DATA_BYTE == 2
  uint16_t result = op_dest->val + op_src->val;
  #else
  uint32_t result = (int)op_dest->val + (int)op_src->val;
  #endif
  OPERAND_W(op_dest, result);

  eflags(OF) = set_of((int)op_src->val, (int)op_dest->val, DATA_BYTE);
  eflags(SF) = set_sf(result, DATA_BYTE);
  eflags(ZF) = set_zf(result);
  eflags(PF) = set_pf(result);
  eflags(CF) = set_cf((unsigned)op_src->val, (unsigned)op_dest->val, DATA_BYTE);

  print_asm_template2();
}

make_instr_helper(i2a)
make_instr_helper(i2rm)
#if DATA_BYTE == 2 || DATA_BYTE == 4
make_instr_helper(si2rm)
#endif
make_instr_helper(r2rm)
make_instr_helper(rm2r)

#include "cpu/exec/template-end.h"
