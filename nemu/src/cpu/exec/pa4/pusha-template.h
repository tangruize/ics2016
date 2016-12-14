#include "cpu/exec/template-start.h"

#define instr pusha
make_helper(concat(pusha_, SUFFIX)) {

  #if DATA_BYTE == 2
  uint32_t temp = cpu.gpr[R_ESP]._16;
  int i = 0;
  for (; i< 8; ++i) {
    temp -= 2;
    swaddr_write(temp, 2, cpu.gpr[i]._16, R_SS);
  }
  cpu.gpr[R_ESP]._16 = temp;
  #else
  uint32_t temp = cpu.gpr[R_ESP]._32;
  int i = 0;
  for (; i< 8; ++i) {
    temp -= 4;
    swaddr_write(temp, 4, cpu.gpr[i]._32, R_SS);
  }
  cpu.gpr[R_ESP]._32 = temp;
  #endif

  return 1;
}

#include "cpu/exec/template-end.h"
