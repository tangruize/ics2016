#include "cpu/exec/template-start.h"

#define instr popa

make_helper(concat(popa_, SUFFIX)) {

  #if DATA_BYTE == 2
  int i = 7;
  for (; i>=0; --i) {
    if (R_ESP == i) {
      cpu.gpr[R_ESP]._16 += 2;
      continue;
    }
    cpu.gpr[i]._16 = swaddr_read(cpu.gpr[R_ESP]._16, 2, R_SS);
    cpu.gpr[R_ESP]._16 += 2;
  }
  #else
  int i = 7;
  for (; i>=0; --i) {
    if (R_ESP == i) {
      cpu.gpr[R_ESP]._32 += 4;
      continue;
    }
    cpu.gpr[i]._32 = swaddr_read(cpu.gpr[R_ESP]._32, 4, R_SS);
    cpu.gpr[R_ESP]._32 += 4;
  }
  #endif
  print_asm("popa");
  return 1;
}


#include "cpu/exec/template-end.h"
