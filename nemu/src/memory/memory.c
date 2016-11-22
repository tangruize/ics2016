#include "common.h"

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

uint32_t lnaddr_read(lnaddr_t addr, size_t len) {
	return hwaddr_read(addr, len);
}

void lnaddr_write(lnaddr_t addr, size_t len, uint32_t data) {
	hwaddr_write(addr, len, data);
}

#ifdef IA32_SEG
typedef struct {
	uint32_t base;
	uint32_t limit;
}GDT_struct;

lnaddr_t seg_translate(swaddr_t addr, size_t len, uint8_t sreg) {
	switch (sreg) {
		case 0:return lnaddr_read(((cpu.ES.index<<3)+cpu.GDTR.base), 4);
		case 1:return cpu.CS.index<<3;
		case 2:return cpu.SS.index<<3;
		case 3:return cpu.DS.index<<3;
		default :assert(0);
	}
	return 0;
}

uint32_t swaddr_read(swaddr_t addr, size_t len, uint8_t sreg) {
	#ifdef DEBUG
		assert(len == 1 || len == 2 || len == 4);
	#endif
	lnaddr_t lnaddr = seg_translate(addr, len, sreg);
	return lnaddr_read(lnaddr, len);
}

void swaddr_write(swaddr_t addr, size_t len, uint32_t data, uint8_t sreg) {
#ifdef DEBUG
	assert(len == 1 || len == 2 || len == 4);
#endif
	lnaddr_t lnaddr = seg_translate(addr, len, sreg);
	lnaddr_write(addr, len, data);
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
