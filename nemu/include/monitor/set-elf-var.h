#ifndef __SET_ELF_VAR_H__
#define __SET_ELF_VAR_H__

#define VAR_MAX 256
#define MAX_LEN 128

typedef struct variables {
	char str[128];
	int key;
} variables;

extern variables var[VAR_MAX];
extern int var_cnt;

/*typedef struct Funcs {

}*/

#endif
