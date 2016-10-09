#include "cpu/exec/template-start.h"

#define instr movsx
#ifndef __FLAG_16__
#define __FLAG_16__
static int flag_16=0;
#endif

#if DATA_BYTE == 2 || DATA_BYTE ==4
static void do_execute() {
  DATA_TYPE_S tmp;
  if (flag_16) {
    int16_t tmp2=op_src->val;
    tmp=(DATA_TYPE_S)tmp2;
    flag_16=0;
  }
  else {
    int8_t tmp2=op_src->val;
    tmp=(DATA_TYPE_S)tmp2;
  }
  OPERAND_W(op_dest, tmp);
  print_asm_template2();
}

make_instr_helper(rmb2r)

#endif

#if DATA_BYTE == 4
make_helper(movsx_rmw2r_l) {
  flag_16=1;
  return idex(eip, decode_rmw2r_l, do_execute);
}
#endif

#include "cpu/exec/template-end.h"
