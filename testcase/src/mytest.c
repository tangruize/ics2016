#include "trap.h"
#include "FLOAT.h"
#include <stdio.h>
#include <string.h>

int main() {
	FLOAT f=0xfffecccd;
	char buf[80];
	int round_num;
	int decimal;
	int is_neg=(f<0);
	f=is_neg?-f:f;
	decimal=(((long long)f&0xffff)*1000000)>>16;
	round_num =(f&0x7fffffff)>>16;
	int len = sprintf(buf, "%d.", is_neg?-round_num:round_num);
	int len2 = sprintf(buf+len, "%d", decimal);
	while (len2<6) {
		buf[len+len2]='0';
		++len2;
	}
	buf[len+len2]='\0';
	nemu_assert(strcmp(buf, "-1.199996") == 0);
	return 0;
}
