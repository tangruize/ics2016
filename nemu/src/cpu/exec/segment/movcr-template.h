#include "cpu/exec/template-start.h"

#define instr movcr

//22
make_helper(movcr_r2rm) {
	int len=decode_r2rm_l(eip+1);
	creg(op_src->reg)=op_dest->val;
	return len+1;
}

//20
make_helper(movcr_rm2r) {
	int len=decode_rm2r_l(eip+1);
	REG(op_dest->reg)=creg(op_src->reg);
	printf("%x %x %x %x\n",op_dest->reg,op_dest->val,op_src->reg, op_src->val);
	return len+1;
}

#include "cpu/exec/template-end.h"
