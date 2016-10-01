#ifndef __SET_FLAGS_H__
#define __SET_FLAGS_H__

int set_pf(unsigned to_check);
inline int set_zf(unsigned to_check);
inline int set_sf(unsigned to_check, int size);
int set_of(uint32_t left, uint32_t right, int size);
int set_cf(uint32_t left, uint32_t right, int size);

#endif
