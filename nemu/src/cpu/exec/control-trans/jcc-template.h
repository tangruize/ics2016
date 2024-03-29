#include "cpu/exec/template-start.h"

static void do_execute() {
  if (cc_func()) {
    cpu.eip = ((int32_t)cpu.eip + (int32_t)op_src->simm) & ((DATA_BYTE==2) ? 0x0000FFFF : 0xFFFFFFFF);
  }
  print_asm_template1();
}

#if DATA_BYTE == 1
make_instr_helper(si)
#endif
#if DATA_BYTE == 2 || DATA_BYTE == 4
make_instr_helper(i)
#endif

#include "cpu/exec/template-end.h"
