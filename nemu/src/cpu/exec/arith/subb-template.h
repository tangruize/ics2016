#include "cpu/exec/template-start.h"

static void do_execute() {
  #ifdef __SBB__
  op_src->val = (int)op_src->val + (int)eflags(CF);
  #endif
  #if DATA_BYTE == 2
  uint16_t result = (uint16_t)((int)op_dest->val - (int)op_src->val);
  #else
  uint32_t result = (uint32_t)((long long)op_dest->val - (long long)op_src->val);
  #endif
  OPERAND_W(op_dest, result);
//  printf("%d\t%d\t%d\n",  op_src->val, op_dest->val, result);

  /*if (op_src->val == 0x80000000) {
      eflags(OF) = 1;
  }
  else {*/
  eflags(OF) = set_sub_of((int)op_dest->val, (int)op_src->val, (DATA_BYTE==2?2:4));
  /*}*/
  eflags(SF) = set_sf(result, (DATA_BYTE==2?2:4));
  eflags(ZF) = set_zf(result);
  eflags(PF) = set_pf(result);
  eflags(CF) = !set_cf((int)op_dest->val, (int)-op_src->val, (DATA_BYTE==2?2:4));

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
