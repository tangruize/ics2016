#ifndef __STD__
#define __STD__
#define DATA_BYTE 4
#include "cpu/exec/template-start.h"

#define instr std

make_helper(std) {
  cpu.eflags.DF=0;
  return 1;
}

make_helper(cld) {
  cpu.eflags.DF=0;
  return 1;
}

#include "cpu/exec/template-end.h"
#undef DATA_BYTE
#endif
