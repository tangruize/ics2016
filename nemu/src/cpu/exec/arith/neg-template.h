#include "cpu/exec/template-start.h"

#define instr neg

static void do_execute() {
	if (op_src->val==0) {
		eflags(CF)=0;
	}
	else {
		eflags(CF)=1;
	}
	DATA_TYPE result = -op_src->val;
	OPERAND_W(op_src, result);

	/* There is no need to update EFLAGS, since no other instructions
	 * in PA will test the flags updated by this instruction.
	 */

	print_asm_template1();
}

make_instr_helper(rm)

#include "cpu/exec/template-end.h"
