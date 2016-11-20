#include "common.h"
#include "misc.h"
#include <time.h>
#include <stdlib.h>

uint32_t dram_read(hwaddr_t addr, size_t len);
void dram_write(hwaddr_t addr, size_t len, uint32_t data);

bool cache_dry_run=false;
unsigned long long cache_L1_ac_cnt=1;
unsigned cache_L1_miss_cnt=0;
unsigned long long cache_L2_ac_cnt=1;
unsigned cache_L2_miss_cnt=0;

#define CA_ADDR(addr)    (addr&0x7ffffff)

#define CA_L2_BLK_SIZE   6
#define CA_L2_GROUP_SIZE 12
#define CA_L2_LINE_SIZE  4
#define CA_L2_TAG_SIZE   9

#define NR_CA_L2_BLK     (1<<CA_L2_BLK_SIZE)
#define NR_CA_L2_GROUP   (1<<CA_L2_GROUP_SIZE)
#define NR_CA_L2_LINE    (1<<CA_L2_LINE_SIZE)
#define NR_CA_L2_TAG     (1<<CA_L2_TAG_SIZE)

#define CA_L2_SIZE       (1<<(CA_L2_BLK_SIZE+CA_L2_GROUP_SIZE+CA_L2_LINE_SIZE))

#define CA_L2_BLK_LEN    4
#define CA_L2_BLK_MASK   (CA_L2_BLK_LEN-1)
#define CA_L2_BLK_S_MASK (NR_CA_L2_BLK-1)

typedef union {
  struct {
    unsigned blk         :CA_L2_BLK_SIZE;
    unsigned group       :CA_L2_GROUP_SIZE;
    unsigned tag         :CA_L2_TAG_SIZE;
  };
  unsigned addr;
} cache_L2_addr;

typedef struct {
  struct {
    union {
      struct {
        unsigned blk      :CA_L2_BLK_SIZE;
        unsigned group    :CA_L2_GROUP_SIZE;
        unsigned tag      :CA_L2_TAG_SIZE;
        unsigned          :3;
        unsigned dir      :1;
        unsigned valid    :1;
      };
      int addr;
    };
    uint8_t block[NR_CA_L2_BLK];
  } line[NR_CA_L2_LINE];
} cache_L2_group;
cache_L2_group cache_L2_groups[NR_CA_L2_GROUP];

void clear_cache_L2() {
  int i,j;
  for (i=0; i<NR_CA_L2_GROUP; ++i) {
    for (j=0; j<NR_CA_L2_LINE; ++j) {
      cache_L2_groups[i].line[j].valid=0;
      cache_L2_groups[i].line[j].dir=0;
    }
  }
}

static void cache_L2_read_once(hwaddr_t addr, void *data) {
  ++cache_L2_ac_cnt;
  cache_L2_addr tmp;
  tmp.addr=addr&~CA_L2_BLK_MASK;
  bool cache_miss=true;
  int i;
  int not_valid=-1;
  for (i=0;i<NR_CA_L2_LINE;++i) {
    if (cache_L2_groups[tmp.group].line[i].valid) {
      if (cache_L2_groups[tmp.group].line[i].tag==tmp.tag) {
        cache_miss=false;
        break;
      }
    }
    else {
      not_valid=i;
    }
  }
  if (cache_dry_run) {
    if (cache_miss) {
      printf("Cache L2 miss.\n");
    }
    else {
      printf("---Cache L2---\nAddr : %x\nDirty:%d\n",
        addr, cache_L2_groups[tmp.group].line[i].dir);
      printf("Group: %d\nLine :%d\n",tmp.group, i);
      printf("Block:\n");
      int j;
      for (j=0;j<NR_CA_L2_BLK;j+=4) {
        if (j%16==0) {
          printf("0x%x:\t", (addr&~CA_L2_BLK_S_MASK)+j);
        }
        if (j==tmp.blk) {
          printf("\33[1;31m");
        }
        printf("0x%08x\t", *(unsigned*)(cache_L2_groups[tmp.group].line[i].block+j));
        if (j==tmp.blk) {
          printf("\33[0m");
        }
        if (j % 16 == 12) {
          fputc('\n', stdout);
        }
      }
      if (j % 16 != 0) {
        fputc('\n', stdout);
      }
    }
    return;
  }
  if (cache_miss) {
    ++cache_L2_miss_cnt;
    if (not_valid==-1) {
      srandom(time(NULL));
      i=random()%NR_CA_L2_LINE;
    }
    else {
      i=not_valid;
    }
    int j;
    for (j=0;j<NR_CA_L2_BLK;j+=4) {
      uint32_t src=dram_read((addr&~CA_L2_BLK_S_MASK)+j, 4);
      memcpy(cache_L2_groups[tmp.group].line[i].block+j, (void*)&src, 4);
    }
    cache_L2_groups[tmp.group].line[i].valid=1;
    cache_L2_groups[tmp.group].line[i].tag=tmp.tag;
  }
  memcpy(data, cache_L2_groups[tmp.group].line[i].block+tmp.blk, CA_L2_BLK_LEN);
}

uint32_t cache_L2_read(hwaddr_t addr, size_t len) {
	uint32_t offset = addr & CA_L2_BLK_MASK;
	uint8_t temp[2 * CA_L2_BLK_LEN];

	cache_L2_read_once(addr, temp);

	if(offset + len > CA_L2_BLK_LEN) {
		/* data cross the burst boundary */
		cache_L2_read_once(addr + CA_L2_BLK_LEN, temp + CA_L2_BLK_LEN);
	}
  if (cache_dry_run) {
    return 0;
  }
	return unalign_rw(temp + offset, 4);
}

static void cache_L2_write_once(hwaddr_t addr, void *data, uint8_t *mask) {
  ++cache_L2_ac_cnt;
  cache_L2_addr tmp;
  tmp.addr=addr&~CA_L2_BLK_MASK;
  bool cache_miss=true;
  int i;
  int not_valid=-1, not_dir=-1;
  for (i=0;i<NR_CA_L2_LINE;++i) {
    if (cache_L2_groups[tmp.group].line[i].valid) {
      if (cache_L2_groups[tmp.group].line[i].tag==tmp.tag) {
        cache_miss=false;
        break;
      }
    }
    else {
      not_valid=i;
      if (cache_L2_groups[tmp.group].line[i].dir==0) {
        not_dir=i;
      }
    }
  }
  if (cache_miss) {
    ++cache_L1_miss_cnt;
    if (not_valid==-1) {
      srandom(time(NULL));
      i=random()%NR_CA_L2_LINE;
    }
    else if (not_dir==-1){
      i=not_valid;
    }
    else {
      i=not_dir;
    }
    if (i!=not_dir) {
      dram_write(CA_ADDR(cache_L2_groups[tmp.group].line[i].addr), 4, cache_L2_groups[tmp.group].line[i].block[tmp.blk]);
    }
    int j;
    for (j=0;j<NR_CA_L2_BLK;j+=4) {
      uint32_t src=dram_read((addr&~CA_L2_BLK_S_MASK)+j, 4);
      memcpy(cache_L2_groups[tmp.group].line[i].block+j, (void*)&src, 4);
    }
    cache_L2_groups[tmp.group].line[i].valid=1;
    cache_L2_groups[tmp.group].line[i].dir=1;
    cache_L2_groups[tmp.group].line[i].tag=tmp.tag;
  }
  else if (cache_L2_groups[tmp.group].line[i].dir) {
    dram_write(CA_ADDR(cache_L2_groups[tmp.group].line[i].addr), 4, cache_L2_groups[tmp.group].line[i].block[tmp.blk]);
  }
  memcpy_with_mask(cache_L2_groups[tmp.group].line[i].block+tmp.blk, data, CA_L2_BLK_LEN, mask);
}

void cache_L2_write(hwaddr_t addr, size_t len, uint32_t data) {
	uint32_t offset = addr & CA_L2_BLK_MASK;
	uint8_t temp[2 * CA_L2_BLK_LEN];
	uint8_t mask[2 * CA_L2_BLK_LEN];
	memset(mask, 0, 2 * CA_L2_BLK_LEN);

	*(uint32_t *)(temp + offset) = data;
	memset(mask + offset, 1, len);

	cache_L2_write_once(addr, temp, mask);

	if(offset + len > CA_L2_BLK_LEN) {
		/* data cross the burst boundary */
		cache_L2_write_once(addr + CA_L2_BLK_LEN, temp + CA_L2_BLK_LEN, mask + CA_L2_BLK_LEN);
	}
}

// cache L1
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

typedef union {
  struct {
    unsigned blk         :CA_L1_BLK_SIZE;
    unsigned group       :CA_L1_GROUP_SIZE;
    unsigned tag         :CA_L1_TAG_SIZE;
  };
  unsigned addr;
} cache_addr;

typedef struct {
  struct {
    union {
      struct {
        unsigned blk      :CA_L1_BLK_SIZE;
        unsigned group    :CA_L1_GROUP_SIZE;
        unsigned tag      :CA_L1_TAG_SIZE;
        unsigned          :4;
        unsigned valid    :1;
      };
      int addr;
    };
    uint8_t block[NR_CA_L1_BLK];
  } line[NR_CA_L1_LINE];
} cache_L1_group;
cache_L1_group cache_groups[NR_CA_L1_GROUP];

void clear_cache_L1() {
  int i,j;
  for (i=0; i<NR_CA_L1_GROUP; ++i) {
    for (j=0; j<NR_CA_L1_LINE; ++j) {
      cache_groups[i].line[j].valid=0;
    }
  }
}

static void cache_L1_read_once(hwaddr_t addr, void *data) {
  ++cache_L1_ac_cnt;
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
  if (cache_dry_run) {
    if (cache_miss) {
      printf("Cache L1 miss.\n");
    }
    else {
      printf("---Cache L1---\nAddr : %x\n", addr);
      printf("Group: %d\nLine :%d\n",tmp.group, i);
      printf("Block:\n");
      int j;
      for (j=0;j<NR_CA_L2_BLK;j+=4) {
        if (j%16==0) {
          printf("0x%x:\t", (addr&~CA_L1_BLK_S_MASK)+j);
        }
        if (j==tmp.blk) {
          printf("\33[1;31m");
        }
        printf("0x%08x\t",*(unsigned*)(cache_groups[tmp.group].line[i].block+j));
        if (j==tmp.blk) {
          printf("\33[0m");
        }
        if (j % 16 == 12) {
          fputc('\n', stdout);
        }
      }
      if (j % 16 != 0) {
        fputc('\n', stdout);
      }
      return;
    }
  }
  if (cache_miss) {
    ++cache_L1_miss_cnt;
    if (cache_dry_run) {
      cache_L2_read(addr&~CA_L1_BLK_MASK, 4);
      return;
    }
    if (not_valid==-1) {
      srandom(time(NULL));
      i=random()%NR_CA_L1_LINE;
    }
    else {
      i=not_valid;
    }
    int j;
    for (j=0;j<NR_CA_L1_BLK;j+=4) {
      //uint32_t src=dram_read((addr&~CA_L1_BLK_S_MASK)+j, 4);
      uint32_t src=cache_L2_read((addr&~CA_L1_BLK_S_MASK)+j, 4);
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
  if (cache_dry_run) {
    return 0;
  }
	return unalign_rw(temp + offset, 4);
}

static void cache_L1_write_once(hwaddr_t addr, void *data, uint8_t *mask) {
  ++cache_L1_ac_cnt;
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
  else {
    ++cache_L1_miss_cnt;
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
  //dram_write(addr, len, data);
  cache_L2_write(addr, len, data);
}
