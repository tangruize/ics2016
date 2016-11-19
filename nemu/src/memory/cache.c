#include "common.h"
#include "misc.h"
#include <time.h>
#include <stdlib.h>

#define CA_L1_BLK_SIZE   6
#define CA_L1_GROUP_SIZE 7
#define CA_L1_LINE_SIZE  3
#define CA_L1_TAG_SIZE   14

#define NR_CA_L1_BLK     (1<<CA_L1_BLK_SIZE)
#define NR_CA_L1_GROUP   (1<<CA_L1_GROUP_SIZE)
#define NR_CA_L1_LINE    (1<<CA_L1_LINE_SIZE)
#define NR_CA_L1_TAG     (1<<CA_L1_TAG_SIZE)

#define CA_L1_SIZE       (1<<(CA_L1_BLK_SIZE+CA_L1_GROUP_SIZE+CA_L1_LINE_SIZE))

#define CA_L1_BLK_LEN    4
#define CA_L1_BLK_MASK   (CA_L1_BLK_LEN-1)
#define CA_L1_BLK_S_MASK (NR_CA_L1_BLK-1)

uint32_t dram_read(hwaddr_t addr, size_t len);
void dram_write(hwaddr_t addr, size_t len, uint32_t data);

typedef union {
  struct {
    unsigned blk      :CA_L1_BLK_SIZE;
    unsigned group    :CA_L1_GROUP_SIZE;
    unsigned tag      :CA_L1_TAG_SIZE;
  };
  unsigned addr;
} cache_addr;

struct {
  struct {
    union {
      struct {
        unsigned tag   :31;
        unsigned valid :1;
      };
      int valid_tag;
    };
    uint8_t block[NR_CA_L1_BLK];
  } line[NR_CA_L1_LINE];
} cache_groups[NR_CA_L1_GROUP];

static void cache_L1_read_once(hwaddr_t addr, void *data) {
  cache_addr tmp;
  tmp.addr=addr&~CA_L1_BLK_MASK;
  bool cache_miss=true;
  int i;
  int not_valid=-1;
  for (i=0;i<NR_CA_L1_LINE;++i) {
    if (cache_groups[tmp.group].line[i].valid) {
      if (cache_groups[tmp.group].line[i].tag==tmp.tag) {
        cache_miss=false;
        break;
      }
    }
    else {
      not_valid=i;
    }
  }
  if (cache_miss) {
    if (not_valid==-1) {
      srandom(time(NULL));
      i=random()%NR_CA_L1_LINE;
    }
    else {
      i=not_valid;
    }
    int j;
    for (j=0;j<NR_CA_L1_BLK;j+=4) {
      uint32_t src=dram_read((addr&~CA_L1_BLK_S_MASK)+j, 4);
      memcpy(cache_groups[tmp.group].line[i].block+j, (void*)&src, 4);
    }
    cache_groups[tmp.group].line[i].valid=1;
    cache_groups[tmp.group].line[i].tag=tmp.tag;
  }
  memcpy(data, cache_groups[tmp.group].line[i].block+tmp.blk, CA_L1_BLK_LEN);
}

uint32_t cache_L1_read(hwaddr_t addr, size_t len) {
	uint32_t offset = addr & CA_L1_BLK_MASK;
	uint8_t temp[2 * CA_L1_BLK_LEN];

	cache_L1_read_once(addr, temp);

	if(offset + len > CA_L1_BLK_LEN) {
		/* data cross the burst boundary */
		cache_L1_read_once(addr + CA_L1_BLK_LEN, temp + CA_L1_BLK_LEN);
	}

	return unalign_rw(temp + offset, 4);
}

static void cache_L1_write_once(hwaddr_t addr, void *data, uint8_t *mask) {
  cache_addr tmp;
  tmp.addr=addr&~CA_L1_BLK_MASK;
  bool cache_miss=true;
  int i;
  for (i=0;i<NR_CA_L1_LINE;++i) {
    if (cache_groups[tmp.group].line[i].valid
      &&cache_groups[tmp.group].line[i].tag==tmp.tag) {
        cache_miss=false;
        break;
      }
  }
  if (!cache_miss) {
    memcpy_with_mask(cache_groups[tmp.group].line[i].block+tmp.blk, data, CA_L1_BLK_LEN, mask);
  }
}

void cache_L1_write(hwaddr_t addr, size_t len, uint32_t data) {
	uint32_t offset = addr & CA_L1_BLK_MASK;
	uint8_t temp[2 * CA_L1_BLK_LEN];
	uint8_t mask[2 * CA_L1_BLK_LEN];
	memset(mask, 0, 2 * CA_L1_BLK_LEN);

	*(uint32_t *)(temp + offset) = data;
	memset(mask + offset, 1, len);

	cache_L1_write_once(addr, temp, mask);

	if(offset + len > CA_L1_BLK_LEN) {
		/* data cross the burst boundary */
		cache_L1_write_once(addr + CA_L1_BLK_LEN, temp + CA_L1_BLK_LEN, mask + CA_L1_BLK_LEN);
	}
  dram_write(addr, len, data);
}
