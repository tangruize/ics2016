#include "cpu/exec/template-start.h"

#define instr dec

static void do_execute () {
	DATA_TYPE result = op_src->val - 1;
	OPERAND_W(op_src, result);

	/* TODO: Update EFLAGS. */
	//panic("please implement me");
	eflags(OF) = set_of(op_src->val, -1, DATA_BYTE);
	eflags(SF) = set_sf(result, DATA_BYTE);
	eflags(ZF) = set_zf(result);
	eflags(PF) = set_pf(result);

	print_asm_template1();
}

make_instr_helper(rm)
#if DATA_BYTE == 2 || DATA_BYTE == 4
make_instr_helper(r)
#endif

#include "cpu/exec/template-end.h"
