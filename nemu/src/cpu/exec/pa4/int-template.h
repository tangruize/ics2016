#include "cpu/exec/template-start.h"

#define instr int

static void do_execute() {
  raise_intr(op_src->val);
  printf("%hhx\n", op_src->val);
}
make_instr_helper(i)

#include "cpu/exec/template-end.h"
