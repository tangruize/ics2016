#include "cpu/exec/template-start.h"

#if DATA_BYTE == 2
#define instr cwtl
#define ext 0x0000ffff
#else
#define instr cltd
#define ext 0xffffffff
#endif

#if DATA_BYTE == 2 || DATA_BYTE == 4
make_helper(instr) {
  if (REG(R_EAX) < 0) {
    REG(R_EDX) = ext;
  }
  else {
    REG(R_EDX) = 0;
  }
  print_asm(str(instr));
  return 1;
}
#endif

#undef instr
#undef ext
#include "cpu/exec/template-end.h"
