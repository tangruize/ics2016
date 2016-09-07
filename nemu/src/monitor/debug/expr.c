#include "nemu.h"
#include <stdlib.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <sys/types.h>
#include <regex.h>

enum {
	NOTYPE = 256, RULE_EQ,
    RULE_ADD, RULE_SUB, RULE_MUL, RULE_DIV,
    RULE_BRA_L, RULE_BRA_R,
    RULE_DIGIT, RULE_NE

	/* TODO: Add more token types */

};

/* 
static struct rule {
	char *regex;
	int token_type;
} rules[] = {
	{" +",	NOTYPE},				// spaces
	{"\\+", '+'},					// plus
	{"==", EQ}						// equal
};*/

static struct rule {
	char *regex;
	int token_type;
} rules[] = {

	/* TODO: Add more rules.
	 * Pay attention to the precedence level of different rules.
	 */

    {"[0-9]+", RULE_DIGIT},
	{" +",	NOTYPE},				// spaces
	{"\\+", RULE_ADD},              // plus
    {"-", RULE_SUB},
    {"\\*", RULE_MUL},
    {"/", RULE_DIV},
    {"\\(", RULE_BRA_L},
    {"\\)", RULE_BRA_R},
    {"!=", RULE_NE},
	{"==", RULE_EQ},						// equal
};

#define NR_REGEX (sizeof(rules) / sizeof(rules[0]) )

static regex_t re[NR_REGEX];

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
	int i;
	char error_msg[128];
	int ret;

	for(i = 0; i < NR_REGEX; i ++) {
		ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
		if(ret != 0) {
			regerror(ret, &re[i], error_msg, 128);
			Assert(ret == 0, "regex compilation failed: %s\n%s", error_msg, rules[i].regex);
		}
	}
}

typedef struct token {
	int type;
	char str[32];
} Token;

Token tokens[32];
int nr_token;

static bool make_token(char *e) {
	int position = 0;
	int i;
	regmatch_t pmatch;
	
	nr_token = 0;

	while(e[position] != '\0') {
		/* Try all rules one by one. */
		for(i = 0; i < NR_REGEX; i ++) {
			if(regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
				char *substr_start = e + position;
				int substr_len = pmatch.rm_eo;

				Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s", i, rules[i].regex, position, substr_len, substr_len, substr_start);
				position += substr_len;

				/* TODO: Now a new token is recognized with rules[i]. Add codes
				 * to record the token in the array `tokens'. For certain types
				 * of tokens, some extra actions should be performed.
				 */

				switch(rules[i].token_type) {
		    case NOTYPE:--nr_token;break;
                    case RULE_ADD:tokens[nr_token].type=RULE_ADD;strcpy(tokens[nr_token].str, "+");break;
                    case RULE_SUB:tokens[nr_token].type=RULE_SUB;strcpy(tokens[nr_token].str, "-");break;
                    case RULE_MUL:tokens[nr_token].type=RULE_MUL;strcpy(tokens[nr_token].str, "*");break;
                    case RULE_DIV:tokens[nr_token].type=RULE_DIV;strcpy(tokens[nr_token].str, "/");break;
                    case RULE_BRA_L:tokens[nr_token].type=RULE_BRA_L;strcpy(tokens[nr_token].str, "(");break;
                    case RULE_BRA_R:tokens[nr_token].type=RULE_BRA_R;strcpy(tokens[nr_token].str, ")");break;
                    case RULE_DIGIT:tokens[nr_token].type=RULE_DIGIT;strncpy(tokens[nr_token].str,substr_start,substr_len);break;
                    case RULE_EQ:tokens[nr_token].type=RULE_EQ;strcpy(tokens[nr_token].str,"==");break;
                    case RULE_NE:tokens[nr_token].type=RULE_NE;strcpy(tokens[nr_token].str,"!=");break;
                    //case RULE_ASSIGN:tokens[nr_token].type=RULE_ASSIGN;strcpy(tokens[nr_token].str,"=");break;
				}
                    ++nr_token;
				break;
			}
		}

		if(i == NR_REGEX) {
			printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
			return false;
		}
	}

	return true; 
}

int check_brackets(int p, int q, int *r, int *s) {
    Assert(p<=q, "Bad expression.\n");
    int i;
    for (i=p; i<=q; ++i) {
        if (tokens[i].type==RULE_BRA_L) {
            int j=i+i;
            int cnt=1, cnt2=1;
            for (;j<=q;++j ) {
                if (tokens[i].type==RULE_BRA_L) {
                    ++cnt;
                    ++cnt2;
                }
                else if (tokens[i].type==RULE_BRA_R) {
                    --cnt;
                    if (cnt==0) {
                        *r=i+1;
                        *s=j-1;
                        return cnt2;
                    }
                }
            }
            return -1;
        }
    }
    return 0;
}

int err_exp=0;
int eva(int p, int q, int sum) {
    int pp,qq;
    Assert(p<=q, "Bad expression.\n");
    if (p==q) {
        return sum;
    }
    int check=check_brackets(p,q,&pp,&qq);
    if (check==-1)
    {
        fputs("The brackets do not match.\n", stderr);
        err_exp=1;
        return -1;
    }
    else if (check ==0)
    {
        int a=strtol(tokens[0].str,NULL,0);
        int b=strtol(tokens[1].str,NULL,0);
        p-=2;
        switch (tokens[1].type)
        {
            case RULE_ADD:return eva(p,q,a+b);
            case RULE_SUB:return eva(p,q,a-b);
            case RULE_MUL:return eva(p,q,a*b);
            case RULE_DIV:if (b==0){
                err_exp=1;
                fputs("Divisor cannot be zero!\n", stderr);
                return -1;
                }
                return eva(p,q,a/b);
            case RULE_NE:return eva(p,q,a!=b);
            case RULE_EQ:return eva(p,q,a==b);
        }
    }
    else
    {
        return eva(pp,qq,sum);
    }
    return 0;
}

uint32_t expr(char *e, bool *success) {
	if(!make_token(e)) {
		*success = false;
		return 0;
	}
    printf("%d\n", eva(0,nr_token-1,0));
    
	/* TODO: Insert codes to evaluate the expression. */
	panic("please implement me");
	return 0;
}

