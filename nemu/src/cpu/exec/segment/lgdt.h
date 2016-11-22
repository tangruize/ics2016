#ifndef __LGDT__
#define __LGDT__

#include "cpu/exec/helper.h"

make_helper(lgdt) {
  cpu.GDTR.limit=instr_fetch(eip+1, 1);
  cpu.GDTR.base=instr_fetch(eip+3, 4);
  return 6;
}

#endif
