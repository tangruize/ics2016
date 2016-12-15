#ifndef __LGDT__
#define __LGDT__

#include "cpu/exec/helper.h"

make_helper(lgdt) {
  int len=decode_rm_l(eip+1);
  cpu.GDTR.limit=lnaddr_read(op_src->addr, 2);
  cpu.GDTR.base=lnaddr_read(op_src->addr+2, 4);
  //printf("gdtr:%x %x %x\n", op_src->addr, cpu.GDTR.limit, cpu.GDTR.base);
  print_asm("lgdt");
  return len+1;
}
make_helper(lidt) {
  int len=decode_rm_l(eip+1);
  cpu.IDTR.limit=lnaddr_read(op_src->addr, 2);
  cpu.IDTR.base=lnaddr_read(op_src->addr+2, 4);
  //printf("gdtr:%x %x %x\n", op_src->addr, cpu.GDTR.limit, cpu.GDTR.base);
  print_asm("lidt");
  return len+1;
}

#endif
