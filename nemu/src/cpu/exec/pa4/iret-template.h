#include "cpu/exec/template-start.h"

#define instr iret

make_helper(iret) {
  cpu.eflags_init = swaddr_read(cpu.gpr[R_ESP]._32 + 8, 4, R_SS);
  cpu.eip = swaddr_read(cpu.gpr[R_ESP]._32, 4, R_SS);
  cpu.gpr[R_ESP]._32 += 4;
  cpu.cs_init = (uint16_t)swaddr_read(cpu.gpr[R_ESP]._32, 4, R_SS);
  cpu.gpr[R_ESP]._32 += 8;
  return 1;
}

#include "cpu/exec/template-end.h"
