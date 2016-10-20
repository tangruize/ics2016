#include "trap.h"
#include "FLOAT.h"
#include <stdio.h>
#include <string.h>

int main() {
	char buf[80];
	sprintf(buf, "%d", (long long)-1);
	nemu_assert(strcmp(buf, "-1") == 0);

	/*FLOAT f=0xfffecccd;
	
	int round_num;
	//int decimal;
	int is_neg=(f<0);
	f=is_neg?-f:f;
	nemu_assert(f == 0x00013333);
	
	//decimal=(((long long)f&0xffff)*1000000)>>16;
	round_num =(f&0x7fffffff)>>16;
	nemu_assert(round_num == 1);*/
	
	//nemu_assert(len==3);
	/*
	int len2 = sprintf(buf+len, "%d", decimal);
	while (len2<6) {
		buf[len+len2]='0';
		++len2;
	}
	buf[len+len2]='\0';
	nemu_assert(strcmp(buf, "-1.199996") == 0);*/
	return 0;
}
