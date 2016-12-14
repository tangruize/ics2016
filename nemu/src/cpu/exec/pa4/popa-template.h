#include "cpu/exec/template-start.h"

#define instr popa

make_helper(concat(popa_, SUFFIX)) {

  #if DATA_BYTE == 2
  int i = 7;
  for (; i>=0; --i) {
    cpu.gpr[R_ESP]._16 -= 2;
    if (R_ESP == i) {
      continue;
    }
    swaddr_write(cpu.gpr[R_ESP]._16, 2, cpu.gpr[i]._16, R_SS);
  }
  #else
  int i = 7;
  for (; i>=0; --i) {
    cpu.gpr[R_ESP]._32 -= 4;
    if (R_ESP == i) {
      continue;
    }
    swaddr_write(cpu.gpr[R_ESP]._32, 2, cpu.gpr[i]._32, R_SS);
  }
  #endif

  return 1;
}


#include "cpu/exec/template-end.h"
