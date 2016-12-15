#include "common.h"
#include "memory.h"
#include <string.h>

#define VMEM_ADDR 0xa0000
#define SCR_SIZE (320 * 200)

/* Use the function to get the start address of user page directory. */
PDE* get_updir();

static PTE kptable[NR_PTE] align_to_page;		// kernel page tables
void create_video_mapping() {
	/* TODO: create an identical mapping from virtual memory area
	 * [0xa0000, 0xa0000 + SCR_SIZE) to physical memory area
	 * [0xa0000, 0xa0000 + SCR_SIZE) for user program. You may define
	 * some page tables to create this mapping.
	 */
	panic("please implement me");
	uint32_t pdir_idx = 0;
	PDE *pdir = (PDE *)va_to_pa(get_updir());
	PTE *ptable = (PTE *)va_to_pa(kptable+0xa0);
	ptable += NR_PTE;
 	pdir[pdir_idx].val = make_pde(ptable);
	int32_t pframe_addr = VMEM_ADDR - PAGE_SIZE;
	ptable --;
	for (; pframe_addr >= 0; pframe_addr -= PAGE_SIZE) {
		ptable->val = make_pte(pframe_addr);
		ptable --;
	}

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
