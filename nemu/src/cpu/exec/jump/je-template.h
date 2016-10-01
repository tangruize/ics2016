#include "cpu/exec/template-start.h"

#define instr je

static void do_execute() {
  if (eflags(ZF)) {
    cpu.eip = ((int32_t)cpu.eip + op_src->simm) & ((DATA_BYTE==2) ? 0x0000FFFF : 0xFFFFFFFF);
  }
  print_asm_template1();
}

// rel
make_instr_helper(i)

#include "cpu/exec/template-end.h"
