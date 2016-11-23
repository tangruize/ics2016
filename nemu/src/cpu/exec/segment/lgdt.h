#ifndef __LGDT__
#define __LGDT__

#include "cpu/exec/helper.h"

make_helper(lgdt) {
  decode_rm_l(eip+1);
  cpu.GDTR.limit=lnaddr_read(op_src->val, 2);
  cpu.GDTR.base=lnaddr_read(op_src->val+2, 4);
  return 6;
}

#endif
