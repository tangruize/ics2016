#include "common.h"
#include "cpu/reg.h"

uint32_t dram_read(hwaddr_t, size_t);
void dram_write(hwaddr_t, size_t, uint32_t);
uint32_t cache_L1_read(hwaddr_t addr, size_t len);
void cache_L1_write(hwaddr_t addr, size_t len, uint32_t data);

/* Memory accessing interfaces */

uint32_t hwaddr_read(hwaddr_t addr, size_t len) {
	//return dram_read(addr, len) & (~0u >> ((4 - len) << 3));
	return cache_L1_read(addr, len) & (~0u >> ((4 - len) << 3));
}

void hwaddr_write(hwaddr_t addr, size_t len, uint32_t data) {
	//dram_write(addr, len, data);
	cache_L1_write(addr, len, data);
}

hwaddr_t page_translate(lnaddr_t lnaddr) {
	union {
		struct {
			uint32_t off   :12;
			uint32_t page  :10;
			uint32_t dir   :10;
		};
		uint32_t val;
	} addr;
	if (cpu.CR0.protect_enable==0||cpu.CR0.paging==0) {
		return lnaddr;
	}
	addr.val=lnaddr;
	uint32_t pdb=cpu.CR3.page_directory_base;
	#define MSB_20 0xfffff000
	uint32_t PDE_page_frame=hwaddr_read(pdb+(addr.dir<<2), 4)&MSB_20;
	printf("%x\n", PDE_page_frame);
	uint32_t PTE_page_frame=hwaddr_read(PDE_page_frame+(addr.page<<2),4)&MSB_20;
	printf("%x %x %x %x\n",pdb, PDE_page_frame, PTE_page_frame, PTE_page_frame+addr.off);
	return PTE_page_frame+addr.off;
}

/*uint32_t lnaddr_read(lnaddr_t addr, size_t len) {
	return hwaddr_read(addr, len);
}*/
uint32_t lnaddr_read(lnaddr_t addr, size_t len) {
	/*if (data cross the page boundary) {
		assert(0);
	}*/
	hwaddr_t hwaddr = page_translate(addr);
	return hwaddr_read(hwaddr, len);
}

/*void lnaddr_write(lnaddr_t addr, size_t len, uint32_t data) {
	hwaddr_write(addr, len, data);
}*/
void lnaddr_write(lnaddr_t addr, size_t len, uint32_t data) {
	/*if (data cross the page boundary) {
		assert(0);
	}*/
	hwaddr_t hwaddr = page_translate(addr);
	hwaddr_write(hwaddr, len, data);
}

#ifdef IA32_SEG

lnaddr_t seg_translate(swaddr_t addr, uint8_t sreg) {
	if (cpu.CR0.protect_enable) {
		//printf("%x %x\n",addr, sreg_limit(sreg));
		assert(addr<sreg_limit(sreg));
		return sreg_base(sreg)+addr;
	}
	else {
		return addr;
	}
	return addr;
}

uint32_t swaddr_read(swaddr_t addr, size_t len, uint8_t sreg) {
	#ifdef DEBUG
		assert(len == 1 || len == 2 || len == 4);
	#endif
	lnaddr_t lnaddr = seg_translate(addr, sreg);
	return lnaddr_read(lnaddr, len);
}

void swaddr_write(swaddr_t addr, size_t len, uint32_t data, uint8_t sreg) {
#ifdef DEBUG
	assert(len == 1 || len == 2 || len == 4);
#endif
	lnaddr_t lnaddr = seg_translate(addr, sreg);
	lnaddr_write(lnaddr, len, data);
}

#else
uint32_t swaddr_read(swaddr_t addr, size_t len) {
#ifdef DEBUG
	assert(len == 1 || len == 2 || len == 4);
#endif
	return lnaddr_read(addr, len);
}

void swaddr_write(swaddr_t addr, size_t len, uint32_t data) {
#ifdef DEBUG
	assert(len == 1 || len == 2 || len == 4);
#endif
	lnaddr_write(addr, len, data);
}

#endif
