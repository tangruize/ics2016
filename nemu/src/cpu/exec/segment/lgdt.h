#ifndef __LGDT__
#define __LGDT__

#include "cpu/exec/helper.h"

make_helper(lgdt) {
  decode_rm_l(eip+1);
  cpu.GDTR.limit=lnaddr_read(op_src->addr, 3);
  cpu.GDTR.base=lnaddr_read(op_src->addr+3, 4);
  printf("gdtr:%x %x %x\n", op_src->addr, cpu.GDTR.limit, cpu.GDTR.base);
  return 6;
}

#endif
