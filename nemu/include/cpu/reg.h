#ifndef __REG_H__
#define __REG_H__

#include "common.h"

enum { R_EAX, R_ECX, R_EDX, R_EBX, R_ESP, R_EBP, R_ESI, R_EDI };
enum { R_AX, R_CX, R_DX, R_BX, R_SP, R_BP, R_SI, R_DI };
enum { R_AL, R_CL, R_DL, R_BL, R_AH, R_CH, R_DH, R_BH };

enum { R_ES, R_CS, R_SS, R_DS };
enum { CR0, CR1, CR2, CR3 };

/* done */
/* TODO: Re-organize the `CPU_state' structure to match the register
 * encoding scheme in i386 instruction format. For example, if we
 * access cpu.gpr[3]._16, we will get the `bx' register; if we access
 * cpu.gpr[1]._8[1], we will get the 'ch' register. Hint: Use `union'.
 * For more details about the register encoding scheme, see i386 manual.
 */

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
				unsigned sreg[4];
				struct {
					union {
						struct {
							unsigned RPL   :2;
							unsigned TI    :1;
							unsigned INDEX :13;
						} ES;
						unsigned es;
					};
					union {
						struct {
							unsigned RPL   :2;
							unsigned TI    :1;
							unsigned INDEX :13;
						} CS;
						unsigned cs;
					};
					union {
						struct {
							unsigned RPL   :2;
							unsigned TI    :1;
							unsigned INDEX :13;
						} SS;
						unsigned ss;
					};
					union {
						struct {
							unsigned RPL   :2;
							unsigned TI    :1;
							unsigned INDEX :13;
						} DS;
						unsigned ds;
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
#define eflags(name) (cpu.eflags.name)
#define sreg(index) (cpu.sreg[index])
#define creg(index) (cpu.CR[index])

extern const char* regsl[];
extern const char* regsw[];
extern const char* regsb[];

#endif
