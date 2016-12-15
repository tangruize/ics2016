#include "common.h"
#include "memory.h"
#include <string.h>

#define VMEM_ADDR 0xa0000
#define SCR_SIZE (320 * 200)

/* Use the function to get the start address of user page directory. */
PDE* get_updir();

void create_video_mapping() {
	/* TODO: create an identical mapping from virtual memory area
	 * [0xa0000, 0xa0000 + SCR_SIZE) to physical memory area
	 * [0xa0000, 0xa0000 + SCR_SIZE) for user program. You may define
	 * some page tables to create this mapping.
	 */
	uint32_t pdir_idx;
	PDE *pdir = (PDE*)(((unsigned)get_updir() & ~PAGE_MASK) + 4096);
	PTE *ptable = (PTE *)pdir + 4096;
 	for (pdir_idx = 0; pdir_idx < SCR_SIZE / PT_SIZE; pdir_idx ++) {
 		pdir[pdir_idx].val = make_pde(ptable);
 		ptable += NR_PTE;
 	}
	asm volatile ("std;\
	 1: stosl;\
		subl %0, %%eax;\
		jge 1b;\
		cld" : :
		"i"(PAGE_SIZE), "a"((VMEM_ADDR + SCR_SIZE - PAGE_SIZE) | 0x7), "D"(ptable - 1));

	//panic("please implement me");
}

void video_mapping_write_test() {
	int i;
	uint32_t *buf = (void *)VMEM_ADDR;
	for(i = 0; i < SCR_SIZE / 4; i ++) {
		buf[i] = i;
	}
}

void video_mapping_read_test() {
	int i;
	uint32_t *buf = (void *)VMEM_ADDR;
	for(i = 0; i < SCR_SIZE / 4; i ++) {
		assert(buf[i] == i);
	}
}

void video_mapping_clear() {
	memset((void *)VMEM_ADDR, 0, SCR_SIZE);
}
