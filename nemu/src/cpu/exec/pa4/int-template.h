#include "cpu/exec/template-start.h"

#define instr int

static void do_execute() {
  //printf("%hhx\n", op_src->val);
  raise_intr(op_src->val);
  print_asm("int");
}
make_instr_helper(i)

#include "cpu/exec/template-end.h"
