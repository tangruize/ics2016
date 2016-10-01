#include "cpu/exec/template-start.h"
#include "cpu/set_flags.h"
#include "cpu/decode/modrm.h"

#define instr cmp

static void do_execute() {
  uint32_t tmp = (int32_t)op_dest->val - (int32_t) op_src->val;
  eflags(SF) = set_sf(tmp, DATA_BYTE);
  eflags(ZF) = set_zf(tmp);
  eflags(PF) = set_pf(tmp);
  eflags(CF) = set_cf(op_dest->val, op_src->val, DATA_BYTE);
  eflags(OF) = set_of(op_dest->val, op_src->val, DATA_BYTE);
  print_asm_template2();
}

make_instr_helper(i2a)
make_instr_helper(i2rm)
make_instr_helper(r2rm)
make_instr_helper(rm2r)

#if DATA_BYTE == 2 || DATA_BYTE == 4
make_helper(concat(cmp_i2rm_sx_, SUFFIX)) {
  op_dest->size = DATA_BYTE;
  int len = read_ModR_M(cpu.eip + 1, op_dest, op_src);
  //printf("len: %d\n",len );
  int8_t tmp = (int8_t)swaddr_read(cpu.eip + len + 1, 1);
  int tmp2=(int)tmp;
  op_src->val=(uint32_t)tmp2;
  print_asm("cmp" str(SUFFIX) " 0x%x,%s", op_src->val, op_dest->str);
  return len + 2;
}
#endif

#include "cpu/exec/template-end.h"
