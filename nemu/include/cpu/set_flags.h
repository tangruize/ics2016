#ifndef __SET_FLAGS_H__
#define __SET_FLAGS_H__

int set_pf(unsigned to_check);
int set_zf(unsigned to_check);
int set_sf(int to_check, int size);
int set_of(int left, int right, int size);
int set_sub_of(int left, int right, int size);
int set_cf(unsigned left, unsigned right, int size);

uint8_t cc_o();    //0
uint8_t cc_no();   //1
uint8_t cc_b();    //2
uint8_t cc_nb();   //3
uint8_t cc_z();    //4
uint8_t cc_nz();   //5
uint8_t cc_be();   //6
uint8_t cc_nbe();  //7
uint8_t cc_s();    //8
uint8_t cc_ns();   //9
uint8_t cc_p();    //a
uint8_t cc_np();   //b
uint8_t cc_l();    //c
uint8_t cc_nl();   //d
uint8_t cc_le();   //e
uint8_t cc_nle();  //f

uint8_t cc_cxz();
uint8_t cc_ecxz();

#endif
