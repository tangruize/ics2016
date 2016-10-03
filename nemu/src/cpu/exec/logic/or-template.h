#include "cpu/exec/template-start.h"

#define instr or

static void do_execute () {
	DATA_TYPE result = op_dest->val | op_src->val;
	OPERAND_W(op_dest, result);

	/* TODO: Update EFLAGS. */
	//panic("please implement me");
	eflags(CF) = 0;
  eflags(OF) = 0;
  eflags(ZF) = set_zf(result);
  eflags(SF) = set_sf(result, DATA_BYTE);
  eflags(PF) = set_pf(result);

	print_asm_template2();
}

make_instr_helper(i2a)
make_instr_helper(i2rm)
#if DATA_BYTE == 2 || DATA_BYTE == 4
make_instr_helper(si2rm)
#endif
make_instr_helper(r2rm)
make_instr_helper(rm2r)

#include "cpu/exec/template-end.h"
