#ifndef __REG_H__
#define __REG_H__

#include "common.h"

enum { R_EAX, R_ECX, R_EDX, R_EBX, R_ESP, R_EBP, R_ESI, R_EDI };
enum { R_AX, R_CX, R_DX, R_BX, R_SP, R_BP, R_SI, R_DI };
enum { R_AL, R_CL, R_DL, R_BL, R_AH, R_CH, R_DH, R_BH };

enum { R_ES, R_CS, R_SS, R_DS };
enum { R_CR0, R_CR1, R_CR2, R_CR3 };

/* done */
/* TODO: Re-organize the `CPU_state' structure to match the register
 * encoding scheme in i386 instruction format. For example, if we
 * access cpu.gpr[3]._16, we will get the `bx' register; if we access
 * cpu.gpr[1]._8[1], we will get the 'ch' register. Hint: Use `union'.
 * For more details about the register encoding scheme, see i386 manual.
 */

 typedef struct SegmentDescriptor {
 	uint32_t limit_15_0          : 16;
 	uint32_t base_15_0           : 16;
 	uint32_t base_23_16          : 8;
 	uint32_t type                : 4;
 	uint32_t segment_type        : 1;
 	uint32_t privilege_level     : 2;
 	uint32_t present             : 1;
 	uint32_t limit_19_16         : 4;
 	uint32_t soft_use            : 1;
 	uint32_t operation_size      : 1;
 	uint32_t pad0                : 1;
 	uint32_t granularity         : 1;
 	uint32_t base_31_24          : 8;
 } SegDesc;

typedef union {
	union {
		uint32_t _32;
		uint16_t _16;
		uint8_t _8[2];
	} gpr[8];

	/* Do NOT change the order of the GPRs' definitions. */

    struct {
	    uint32_t eax, ecx, edx, ebx, esp, ebp, esi, edi;
    	swaddr_t eip;
			union {
				struct {
					unsigned CF :1; //use
					unsigned :1;
					unsigned PF :1; //use
					unsigned :1;
					unsigned AF :1;
					unsigned :1;
					unsigned ZF :1; //use
					unsigned SF :1; //use
					unsigned TF :1;
					unsigned IF :1; //use
					unsigned DF :1; //use
					unsigned OF :1; //use
					unsigned IOPL :2;
					unsigned NT :1;
					unsigned :1;
					unsigned RF :1;
					unsigned VM :1;
					unsigned :14;
				} eflags;
				unsigned eflags_init;
			};

			#ifdef IA32_SEG

			// using UPPER case to indicate a struct, lower case as a value
			// baad style, but convenient
			union {
				unsigned CR[4];
				struct {
					union {
						struct {
							unsigned PE :1;
							unsigned MP :1;
							unsigned EM :1;
							unsigned TS :1;
							unsigned ET :1;
							unsigned    :26;
							unsigned PG :1;
						}CR0;
						unsigned cr0;
					};

					uint32_t cr1;
					uint32_t cr2;
					union {
						struct {
							unsigned      :12;
							unsigned PDBR :20;
						}CR3;
						uint32_t cr3;
					};
				};
			};
			union {
				struct {
					uint32_t base;
					uint16_t limit;
				}GDTR;
				uint64_t gdtr;
			};
			union {
				struct {
					union {
						struct {
							uint16_t RPL   :2;
							uint16_t TI    :1;
							uint16_t INDEX :13;
						} SREG[4];
						uint16_t sreg[4];
					};
					struct {
						uint32_t limit;
						uint32_t base;
					} SREG_INV[4];
				};
				struct {
					struct {
						struct {
							uint16_t RPL   :2;
							uint16_t TI    :1;
							uint16_t INDEX :13;
						} ES;
            struct {
  						uint32_t limit;
  						uint32_t base;
  					} ES_INV;
					};
					struct {
						struct {
							uint16_t RPL   :2;
							uint16_t TI    :1;
							uint16_t INDEX :13;
						} CS;
            struct {
  						uint32_t limit;
  						uint32_t base;
  					} CS_INV;
					};
					struct {
						struct {
							uint16_t RPL   :2;
							uint16_t TI    :1;
							uint16_t INDEX :13;
						} SS;
            struct {
  						uint32_t limit;
  						uint32_t base;
  					} SS_INV;
					};
					struct {
						struct {
							uint16_t RPL   :2;
							uint16_t TI    :1;
							uint16_t INDEX :13;
						} DS;
            struct {
  						uint32_t limit;
  						uint32_t base;
  					} DS_INV;
					};
				};
			};
			#endif
    };

} CPU_state;

extern CPU_state cpu;

static inline int check_reg_index(int index) {
	assert(index >= 0 && index < 8);
	return index;
}

#define reg_l(index) (cpu.gpr[check_reg_index(index)]._32)
#define reg_w(index) (cpu.gpr[check_reg_index(index)]._16)
#define reg_b(index) (cpu.gpr[check_reg_index(index) & 0x3]._8[index >> 2])
#ifdef IA32_SEG
#define eflags(name) (cpu.eflags.name)
#define sreg(index) (cpu.sreg[index])
#define sreg_index(i) (cpu.SREG[i].INDEX)
#define sreg_limit(index) (cpu.SREG_INV[index].limit)
#define sreg_base(index) (cpu.SREG_INV[index].base)
#define creg(index) (cpu.CR[index])
#endif

extern const char* regsl[];
extern const char* regsw[];
extern const char* regsb[];

#endif
