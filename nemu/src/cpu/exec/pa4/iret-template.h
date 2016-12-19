#include "cpu/exec/template-start.h"

#define instr iret

make_helper(iret) {
  cpu.eip = swaddr_read(cpu.gpr[R_ESP]._32, 4, R_SS) + 1;
  cpu.gpr[R_ESP]._32 += 4;
  cpu.cs_init = (uint16_t)swaddr_read(cpu.gpr[R_ESP]._32, 2, R_SS);
  cpu.gpr[R_ESP]._32 += 4;
  cpu.eflags_init = swaddr_read(cpu.gpr[R_ESP]._32, 4, R_SS);
  cpu.gpr[R_ESP]._32 += 4;
  print_asm("iret");
  return 1;
}

#include "cpu/exec/template-end.h"
