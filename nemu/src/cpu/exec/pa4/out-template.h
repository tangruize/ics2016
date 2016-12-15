#include "cpu/exec/template-start.h"

make_helper(concat(out_,SUFFIX)) {
  pio_write(cpu.gpr[R_EDX]._16, DATA_BYTE, REG(R_EAX));
  return 1;
}

#include "cpu/exec/template-end.h"
