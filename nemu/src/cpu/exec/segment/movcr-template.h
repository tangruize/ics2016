#include "cpu/exec/template-start.h"

#define instr movcr

//22
make_helper(movcr_r2rm) {
	int len=decode_r2rm_l(eip+1);
	creg(op_dest->reg)=op_src->val;
	return len+1;
}

//20
make_helper(movcr_rm2r) {
	int len=decode_rm2r_l(eip+1);
	REG(op_dest->reg)=creg(op_src->reg);
	return len+1;
}

#include "cpu/exec/template-end.h"