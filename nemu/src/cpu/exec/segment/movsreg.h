#ifndef __MOV_SREG__
#define __MOV_SREG__

#include "cpu/exec/helper.h"
static union {
  struct {
    uint32_t limit_15_0        : 16;
    uint32_t limit_19_16       : 4;
    uint32_t base_15_0         : 16;
	  uint32_t base_23_16        : 8;
    uint32_t base_31_24        : 8;
  } Split;
  struct {
  	uint32_t limit             : 20;
    uint32_t base              : 32;
  } Merge;
}SD;
make_helper(movsreg) {
  int len=decode_rm2r_l(eip+1);
  sreg(op_dest->sreg)=op_src->val;
  SegDesc tmp;
  int x=lnaddr_read(sreg_index(op_dest->sreg)*8+cpu.GDTR.base, 4);
  memcpy((void*)&tmp, (void*)&x, 4);
  x=lnaddr_read(sreg_index(op_dest->sreg)*8+cpu.GDTR.base+4, 4);
  memcpy((void*)&tmp+4, (void*)&x, 4);
  SD.Split.limit_15_0=tmp.limit_15_0;
  SD.Split.limit_19_16=tmp.limit_19_16;
  SD.Split.base_15_0=tmp.base_15_0;
  SD.Split.base_23_16=tmp.base_23_16;
  SD.Split.base_31_24=tmp.base_31_24;
  sreg_limit(op_dest->reg)=SD.Merge.limit;
  sreg_base(op_dest->reg)=SD.Merge.base;
  printf("sreg:%x %x %x %x %x\n",sreg(op_dest->sreg), sreg_index(op_dest->sreg),  SD.Merge.limit, SD.Merge.base, cpu.GDTR.base);
  return len+1;
}
#endif
