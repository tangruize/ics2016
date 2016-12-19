#include "cpu/exec/helper.h"
#include "cpu/raise_intr.h"
#include	<setjmp.h>
extern	jmp_buf	jbuf;

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

void raise_intr(uint8_t	NO)	{
	  /*	TODO:	Trigger	an	interrupt/exception	with	``NO''.
	   *	That	is,	use	``NO''	to	index	the	IDT.
	 	 */

    cpu.gpr[R_ESP]._32 -= 4;
    swaddr_write(cpu.gpr[R_ESP]._32, 4, cpu.eflags_init, R_SS);
    cpu.gpr[R_ESP]._32 -= 4;
    swaddr_write(cpu.gpr[R_ESP]._32, 4, cpu.cs_init, R_SS);
    cpu.gpr[R_ESP]._32 -= 4;
    swaddr_write(cpu.gpr[R_ESP]._32, 4, cpu.eip + 2, R_SS);

    uint32_t address = NO * 8 + idtr_base;
    uint32_t offset = lnaddr_read(address + 4, 4);
    uint32_t selector = lnaddr_read(address, 4);
    offset &= 0xffff0000;
    offset += (selector & 0xffff);
    selector >>= 16;

    sreg(R_CS) = selector;
    selector >>= 3;
    int x=lnaddr_read(selector*8+cpu.GDTR.base, 4);
    SegDesc tmp;
    memcpy((void*)&tmp, (void*)&x, 4);
    x=lnaddr_read(selector*8+cpu.GDTR.base+4, 4);
    memcpy((void*)&tmp+4, (void*)&x, 4);
    SD.Split.limit_15_0=tmp.limit_15_0;
    SD.Split.limit_19_16=tmp.limit_19_16;
    SD.Split.base_15_0=tmp.base_15_0;
    SD.Split.base_23_16=tmp.base_23_16;
    SD.Split.base_31_24=tmp.base_31_24;
    sreg_limit(R_CS)=SD.Merge.limit+1;
    sreg_limit(R_CS)<<=12;
    sreg_limit(R_CS)-=1;
    sreg_base(R_CS)=SD.Merge.base;
    offset += SD.Merge.base;

    cpu.eip = offset;
 	  /*	Jump	back	to	cpu_exec()	*/
 	  longjmp(jbuf,	1);
}
