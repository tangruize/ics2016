#include "nemu.h"
#include "common.h"
#include <stdlib.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <sys/types.h>
#include <regex.h>

enum {
  
  RULE_ASSIGN=0,
  RULE_AND, RULE_OR,
  RULE_EQ, RULE_NE,
  RULE_ADD, RULE_SUB,
  RULE_MUL, RULE_DIV,
  RULE_NOT, RULE_NEG, RULE_DER, 
  RULE_BRA_L, RULE_BRA_R,
  
  RULE_NOTYPE=256, RULE_DIGIT, RULE_ALPHA, RULE_REG
  
  /* done */
  /* TODO: Add more token types */
  
};

static struct precedence {
  int rule;
  int pre;
} rule_pre[] = {
  {RULE_ASSIGN,0},
  {RULE_AND,1}, {RULE_OR,1},
  {RULE_EQ,2}, {RULE_NE,2},
  {RULE_ADD,3}, {RULE_SUB,3},
  {RULE_MUL,4}, {RULE_DIV,4},
  {RULE_NOT,5}, {RULE_NEG, 5}, {RULE_DER, 5},
  {RULE_BRA_L,6},{RULE_BRA_R,6}
};

static struct rule {
  char *regex;
  int token_type;
} rules[] = {
  
  /* done */
  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  
  {"^[a-zA-Z_][a-zA-Z0-9_]*", RULE_ALPHA},
  {"[0-9]+", RULE_DIGIT},
  {"\\$(eax|ecx|edx|ebx|esp|ebp|esi|edi)", RULE_REG},
  {" +",	RULE_NOTYPE},
  {"\\+", RULE_ADD},
  {"-", RULE_SUB},
  {"\\*", RULE_MUL},
  {"/", RULE_DIV},
  {"\\(", RULE_BRA_L},
  {"\\)", RULE_BRA_R},
  {"!=", RULE_NE},
  {"==", RULE_EQ},
  {"=", RULE_ASSIGN},
  {"\\|\\|", RULE_OR},
  {"&&", RULE_AND},
  {"\\!", RULE_NOT},
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
  long int value;
} Token;

Token tokens[32];
int nr_token;

typedef struct variables {
  char str[32];
  long int key;
} variables;

#define VAR_MAX 32
static variables var[VAR_MAX];
static int var_cnt=0;

static int find_var(char *str) {
  int i=0;
  for (;i < var_cnt; ++i) {
    if (strcmp(var[i].str, str)==0) {
      return i;
    }
  }
  return -1;
}

static int set_var(char *str, long int value) {
  int i=0;
  if (var_cnt==VAR_MAX) {
    printf("variables reached limits (%d), please clear!\n", VAR_MAX);
    return -1;
  }
  for (;i < var_cnt; ++i) {
    if (strcmp(var[i].str, str)==0) {
      var[i].key=value;
      return i;
    }
  }
  strcpy(var[var_cnt].str,str);
  var[var_cnt].key=value;
  ++var_cnt;
  return var_cnt;
}

static int clear_var() {
  var_cnt=0;
  printf("Ok!\n");
  return 0;
}

static char *cpu_name_rule[]={"$eax", "$ecx", "$edx", "$ebx", "$esp", "$ebp", "$esi", "$edi", "$eip"};

static bool print_err(char *str, int n) {
  fprintf(stderr, "%s\n\033[32m%*c\033[0m\n", str, n+1, '^');
  return false;
}
  

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;
  int left=0,right=0;
  nr_token = 0;
  int start_alpha=0;
  while(e[position] != '\0') {
    /* Try all rules one by one. */
    for(i = 0; i < NR_REGEX; i ++) {
      if(regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
	char *substr_start = e + position;
	int substr_len = pmatch.rm_eo;
	
	//Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s", i, rules[i].regex, position, substr_len, substr_len, substr_start);
	
	
	/* done */
	/* TODO: Now a new token is recognized with rules[i]. Add codes
	 * to record the token in the array `tokens'. For certain types
	 * of tokens, some extra actions should be performed.
	 */
	int is_neg_or_der=0;
	int t;
	if (start_alpha&&nr_token==1&&rules[i].token_type!=RULE_ASSIGN) {
	  --var_cnt;
	  return print_err(e, position);
	}
	switch(rules[i].token_type) {
	  case RULE_DIGIT:
	    if (nr_token!=0) {
	      t=tokens[nr_token-1].type;
	      if (t==RULE_NEG) {
		--nr_token;
		is_neg_or_der=1;
	      }
	      else if (t==RULE_DER){
		--nr_token;
		is_neg_or_der=2;
	      }
	      else if (t==RULE_DIGIT || t==RULE_ALPHA || t==RULE_BRA_R || t==RULE_REG) {
		return print_err(e, position);
	      }
	    }
	    tokens[nr_token].type=RULE_DIGIT;
	    strncpy(tokens[nr_token].str,substr_start,substr_len);
	    tokens[nr_token].value=strtol(tokens[nr_token].str,NULL,0);
	    if (is_neg_or_der==1) {
	      tokens[nr_token].value=-tokens[nr_token].value;
	    }
	    else if(is_neg_or_der==2){
	      tokens[nr_token].value=(long)swaddr_read((swaddr_t)tokens[nr_token].value,4);
	    }
	    break;
	  case RULE_ALPHA: 
	    if (nr_token!=0) {
	      t=tokens[nr_token-1].type;
	      if (t==RULE_NEG) {
		--nr_token;
		is_neg_or_der=1;
	      }
	      else if (t==RULE_DER) {
		--nr_token;
		is_neg_or_der=2;
	      }
	      else if (t==RULE_DIGIT || t==RULE_ALPHA || t==RULE_BRA_R || t==RULE_REG) {
		return print_err(e, position);
	      }
	    }
	    tokens[nr_token].type=RULE_ALPHA;
	    strncpy(tokens[nr_token].str,substr_start,substr_len);
	    int tmp_var=find_var(tokens[nr_token].str);
	    //printf("var: %d\n",tmp_var);
	    if (nr_token==0) {
	      tmp_var=set_var(tokens[nr_token].str,0);
	      start_alpha=1;
	      if (tmp_var==-1) {
		return false;
	      }
	    }
	    else if (tmp_var!=-1) {
	      if (is_neg_or_der==1) {
		tokens[nr_token].value=-var[tmp_var].key;
	      }
	      else if(is_neg_or_der==2) {
		tokens[nr_token].value=(long)swaddr_read((swaddr_t)var[tmp_var].key,4);
	      }
	    }
	    else {
	      printf("cannot find the variable '%s'\n", tokens[nr_token].str);
	      return false;
	    }
	    break;
	  case RULE_REG:
	    
	    if (nr_token!=0) {
	      t=tokens[nr_token-1].type;
	      if (t==RULE_NEG) {
		--nr_token;
		is_neg_or_der=1;
	      }
	      else if (t==RULE_DER) {
		--nr_token;
		is_neg_or_der=2;
	      }
	      else if (t==RULE_DIGIT || t==RULE_ALPHA || t==RULE_BRA_R || t==RULE_REG) {
		return print_err(e, position);
	      }
	    }
	    tokens[nr_token].type=RULE_REG;
	    strncpy(tokens[nr_token].str,substr_start,substr_len);
	    int gpr_cnt=0;
	    for (;gpr_cnt<8;++gpr_cnt) {
	      if (strcmp(tokens[nr_token].str,cpu_name_rule[gpr_cnt])==0) {
		tokens[nr_token].value=(long)cpu.gpr[gpr_cnt]._32;
		break;
	      }
	    }
	    if (gpr_cnt==8) {
	      tokens[nr_token].value=(long)cpu.eip;
	    }
	    if (is_neg_or_der==1) {
	      tokens[nr_token].value=-tokens[nr_token].value;
	    }
	    else if(is_neg_or_der==2) {
	      tokens[nr_token].value=(long)swaddr_read((swaddr_t)tokens[nr_token].value,4);
	    }
	    break;
	  case RULE_NOTYPE:break;
	  case RULE_ADD:
	    tokens[nr_token].type=RULE_ADD;
	    strcpy(tokens[nr_token].str, "+");
	    if (nr_token==0) {
	      return print_err(e, position);
	    }
	    else
	    {
	      t=tokens[nr_token-1].type;
	      if (t!=RULE_DIGIT && t!=RULE_ALPHA && t!=RULE_BRA_R && t!=RULE_REG) {
		return print_err(e, position);
	      }
	    }
	    break;
	  case RULE_SUB:
	    tokens[nr_token].type=RULE_SUB;
	    strcpy(tokens[nr_token].str, "-");
	    if (nr_token!=0) {
	      t=tokens[nr_token-1].type;
	      if (t!=RULE_DIGIT && t!=RULE_ALPHA && t!=RULE_REG && t!=RULE_BRA_R)
	      {
		tokens[nr_token].type=RULE_NEG;
	      }
	    }
	    else {
	      tokens[nr_token].type=RULE_NEG;
	    }
	    if (tokens[nr_token].type!=RULE_NEG) {
	      if (nr_token==0) {
		return print_err(e, position);
	      }
	      else
	      {
		t=tokens[nr_token-1].type;
		if (t!=RULE_DIGIT && t!=RULE_ALPHA && t!=RULE_BRA_R && t!=RULE_REG) {
		  return print_err(e, position);
		}
	      }
	    }
	    break;
	  case RULE_MUL:
	    tokens[nr_token].type=RULE_MUL;
	    strcpy(tokens[nr_token].str, "*");
	    if (nr_token!=0) {
	      t=tokens[nr_token-1].type;
	      if (t!=RULE_DIGIT && t!=RULE_ALPHA && t!=RULE_REG && t!=RULE_BRA_R)
	      {
		tokens[nr_token].type=RULE_DER;
	      }
	    }
	    else {
	      tokens[nr_token].type=RULE_DER;
	    }
	    if (tokens[nr_token].type!=RULE_DER) {
	      if (nr_token==0) {
		return print_err(e, position);
	      }
	      else
	      {
		t=tokens[nr_token-1].type;
		if (t!=RULE_DIGIT && t!=RULE_ALPHA && t!=RULE_BRA_R && t!=RULE_REG) {
		  return print_err(e, position);
		}
	      }
	    }
	    break;
	  case RULE_DIV:
	    tokens[nr_token].type=RULE_DIV;
	    strcpy(tokens[nr_token].str, "/");
	    if (nr_token==0) {
	      return print_err(e, position);
	    }
	    else
	    {
	      t=tokens[nr_token-1].type;
	      if (t!=RULE_DIGIT && t!=RULE_ALPHA && t!=RULE_BRA_R && t!=RULE_REG) {
		return print_err(e, position);
	      }
	    }
	    break;
	  case RULE_BRA_L:
	    tokens[nr_token].type=RULE_BRA_L;
	    strcpy(tokens[nr_token].str, "(");
	    if (nr_token!=0)
	    {
	      t=tokens[nr_token-1].type;
	      if (t==RULE_DIGIT || t==RULE_ALPHA || t==RULE_REG || t==RULE_BRA_R)
	      {
		return print_err(e, position);
	      }
	    }
	    ++left;
	    break;
	  case RULE_BRA_R:
	    tokens[nr_token].type=RULE_BRA_R;
	    strcpy(tokens[nr_token].str, ")");
	    if (nr_token==0) {
	      return print_err(e, position);
	    }
	    t=tokens[nr_token-1].type;
	    if (t!=RULE_DIGIT && t!=RULE_ALPHA && t!=RULE_REG && t!=RULE_BRA_R)
	    {
	      return print_err(e, position);
	    }
	    ++right;
	    if (right>left) {
	      return print_err(e, position);
	    }
	    break;
	  case RULE_NE:
	    tokens[nr_token].type=RULE_NE;
	    strcpy(tokens[nr_token].str,"!=");
	    if (nr_token==0) {
	      return print_err(e, position);
	    }
	    else
	    {
	      t=tokens[nr_token-1].type;
	      if (t!=RULE_DIGIT && t!=RULE_ALPHA && t!=RULE_BRA_R && t!=RULE_REG) {
		return print_err(e, position);
	      }
	    }
	    break;
	  case RULE_EQ:
	    tokens[nr_token].type=RULE_EQ;
	    strcpy(tokens[nr_token].str,"==");
	    if (nr_token==0) {
	      return print_err(e, position);
	    }
	    else
	    {
	      t=tokens[nr_token-1].type;
	      if (t!=RULE_DIGIT && t!=RULE_ALPHA && t!=RULE_BRA_R && t!=RULE_REG) {
		return print_err(e, position);
	      }
	    }
	    break;
	  case RULE_ASSIGN:
	    if (nr_token!=1 || tokens[0].type!=RULE_ALPHA) {
	      return print_err(e, position);
	    }
	    tokens[nr_token].type=RULE_ASSIGN;
	    strcpy(tokens[nr_token].str,"=");	
	    if (nr_token!=1||tokens[0].type!=RULE_ALPHA) {
	      return print_err(e, position);
	    }
	    break;
	  case RULE_OR:
	    tokens[nr_token].type=RULE_OR;
	    strcpy(tokens[nr_token].str,"||");
	    if (nr_token==0) {
	      return print_err(e, position);
	    }
	    else
	    {
	      t=tokens[nr_token-1].type;
	      if (t!=RULE_DIGIT && t!=RULE_ALPHA && t!=RULE_BRA_R && t!=RULE_REG) {
		return print_err(e, position);
	      }
	    }
	    break;
	  case RULE_AND:
	    tokens[nr_token].type=RULE_AND;
	    strcpy(tokens[nr_token].str,"&&");
	    if (nr_token==0) {
	      return print_err(e, position);
	    }
	    else
	    {
	      t=tokens[nr_token-1].type;
	      if (t!=RULE_DIGIT && t!=RULE_ALPHA && t!=RULE_BRA_R && t!=RULE_REG) {
		return print_err(e, position);
	      }
	    }
	    break;
	  case RULE_NOT:
	    tokens[nr_token].type=RULE_NOT;
	    strcpy(tokens[nr_token].str, "!");
	    if (nr_token!=0) {
	      t=tokens[nr_token-1].type;
	      if (t==RULE_DIGIT || t==RULE_ALPHA || t==RULE_REG || t==RULE_BRA_R)
	      {
		return print_err(e, position);
	      }
	    }
	    break;
	}
	position += substr_len;
	++nr_token;
	break;
      }
    }
    if(i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  int t2;
  if (nr_token>0)
  {
    t2=tokens[nr_token-1].type;
    if (t2!=RULE_DIGIT && t2!=RULE_ALPHA && t2!=RULE_BRA_R && t2!=RULE_REG) {
      return print_err(e, position-1);
    }
  }
  if (left!=right) {
    fprintf(stderr, "Brackets do not match.\n");
    return false;
  }
  return true; 
}

static int find_digit(int p, int q, int op, int *pre, int *next) {
  int i;
  if (tokens[op].type<RULE_NOT) {
    for (i=op;i>=p;--i) {
      if (tokens[i].type>RULE_NOTYPE) {
	*pre=i;
	break;
      }
    }
    if (i<p) {
      return -1;
    }
  }
  for (i=op;i<=q;++i) {
    if (tokens[i].type>RULE_NOTYPE) {
      *next=i;
      break;
    }
  }
  if (i>q) {
    return -1;
  }
  return 0;
}

static int eval(int p, int q, bool *success) {
  if (p==q) {
    return tokens[p].value;
  }
  int i=p;
  int op=0;
  for (i=p;i<=q;++i) {
    if (tokens[i].type<RULE_NOTYPE) {
      ++op;
    }
  }
  
  /*debug*/
  printf("op: %d\n", op);
  
  int j=0;
  for (;j<op;++j) {
    int max_pre=-1, max_pre_pos=-1;
    for (i=p;i<=q;++i) {
      if (tokens[i].type<RULE_NOTYPE&&rule_pre[tokens[i].type].pre>max_pre) {
	max_pre=tokens[i].type;
	max_pre_pos=i;
      }
    }
    //debug
    printf("max_pre: %d\n", max_pre);
    
    if (max_pre!=-1) {
      int pre=0,next=0;
      if (find_digit(p,q,max_pre_pos,&pre,&next)==0) {
	//debug
	printf("pre: %d\t next: %d\n", pre, next);
	switch (tokens[max_pre_pos].type) {
	  case RULE_AND:
	    tokens[max_pre_pos].value=(tokens[pre].value&&tokens[next].value);
	    break;
	  case RULE_OR:
	    tokens[max_pre_pos].value=(tokens[pre].value||tokens[next].value);
	    break;
	  case RULE_EQ:
	    tokens[max_pre_pos].value=(tokens[pre].value==tokens[next].value);
	    break;
	  case RULE_NE:
	    tokens[max_pre_pos].value=(tokens[pre].value!=tokens[next].value);
	    break;
	  case RULE_ADD:
	    tokens[max_pre_pos].value=(tokens[pre].value+tokens[next].value);
	    
	    //debug 
	    printf("add: %ld\n", tokens[max_pre_pos].value);
	    break;
	  case RULE_SUB:
	    tokens[max_pre_pos].value=(tokens[pre].value-tokens[next].value);
	    break;
	  case RULE_MUL:
	    tokens[max_pre_pos].value=(tokens[pre].value*tokens[next].value);
	    break;
	  case RULE_DIV:
	    if (tokens[next].value) {
	      tokens[max_pre_pos].value=(tokens[pre].value/tokens[next].value);
	    }
	    else {
	      fputs("Divisor cannot be zero!\n", stderr);
	    }
	    break;
	  case RULE_NOT:
	    tokens[max_pre_pos].value=(!tokens[next].value);
	    break;
	  case RULE_NEG:
	    tokens[max_pre_pos].value=(-tokens[next].value);
	    break;
	  case RULE_DER:
	    tokens[max_pre_pos].value=(long)swaddr_read((swaddr_t)tokens[next].value,4);
	    break;
	}
	tokens[max_pre_pos].type=RULE_DIGIT;
	tokens[next].type=RULE_NOTYPE;
	
	//debug 
	printf("rule_not: %d\trule_pos: %d\n", tokens[max_pre_pos].type,RULE_NOT);
	if (tokens[max_pre_pos].type<RULE_NOT) {
	  tokens[pre].type=RULE_NOTYPE;
	}
      }
      else {
	printf("error!\n");
	*success=false;
	return 0;
      }
    }
  }
  //debug
      printf("0: %d\t1: %d\t2: %d\n", tokens[0].type,tokens[1].type,tokens[2].type);
  for (i=p;i<=q;++i) {
    if (tokens[i].type>RULE_NOTYPE) {
      *success=true;
      
      //debug
      printf("where: %d\nvalue: %ld", i, tokens[i].value);
      
      return tokens[i].value;
    }
  }
  
  //debug
  printf("false\n");
  *success=false;
  return -1;
}
/*
 * typedef struct split_expr {
 *    int start,end;
 *    int sum, is_calc;
 *    split_expr *depend;
 *    split_expr *next;
 * } split_expr; 
 * 
 * split_expr *expr_start;
 * 
 * int analyse_expr() {
 *    while (expr_start!=NULL)
 *    {
 *        split_expr *p=expr->next;
 *        free(expr_start);
 *        expr_start=p;
 *    }
 *    int i=0;
 *    for (;i!=nr_token;++i)
 *    {
 *        split_expr *p=new split_expr;
 *        p->next=NULL;
 *        p->depend=NULL;
 *        if (expr_start==NULL) {
 *            expr_start=p;
 *        }
 * 
 *    }
 * }
 */
/*
 * int check_brackets(int p, int q, int *r, int *s) {
 *    Assert(p<=q, "Bad expression.\n");
 *    int i;
 *    for (i=p; i<=q; ++i) {
 *        if (tokens[i].type==RULE_BRA_L) {
 *            int j=i+i;
 *            int cnt=1, cnt2=1;
 *            for (;j<=q;++j ) {
 *                if (tokens[i].type==RULE_BRA_L) {
 *                    ++cnt;
 *                    ++cnt2;
 *                }
 *                else if (tokens[i].type==RULE_BRA_R) {
 *                    --cnt;
 *                    if (cnt==0) {
 *r=i+1;
 *s=j-1;
 *                        return cnt2;
 *                    }
 *                }
 *            }
 *            return -1;
 *        }
 *    }
 *    return 0;
 * }
 * 
 * int err_exp=0;
 * int eva(int p, int q, int sum) {
 *    int pp=0,qq=0;
 *    //Assert(p<=q, "Bad expression.\n");
 *    if (p>=q) {
 *        return sum;//+strtol(tokens[p].str,NULL,0);;
 *    }
 *    int check=check_brackets(p,q,&pp,&qq);
 *    //printf("check: %d\n",check);
 *    if (check==-1)
 *    {
 *        fputs("The brackets do not match.\n", stderr);
 *        err_exp=1;
 *        return -1;
 *    }
 *    else if (check ==0)
 *    {
 *        if (p==0) {
 *            int a=strtol(tokens[p].str,NULL,0);
 *            int b=strtol(tokens[p+2].str,NULL,0);
 *            p+=3;
 *            //printf("%d\t%d\n", a,b);
 *            switch (tokens[p-2].type)
 *            {
 *                case RULE_ADD:return eva(p,q,a+b);
 *                case RULE_SUB:return eva(p,q,a-b);
 *                case RULE_MUL:return eva(p,q,a*b);
 *                case RULE_DIV:if (b==0){
 *                    err_exp=1;
 *                    fputs("Divisor cannot be zero!\n", stderr);
 *                    return -1;
 *                    }
 *                    return eva(p,q,a/b);
 *                case RULE_NE:return eva(p,q,a!=b);
 *                case RULE_EQ:return eva(p,q,a==b);
 *            }
 *        }
 *        else 
 *        {
 *            int b=strtol(tokens[p+1].str,NULL,0);
 *            p+=2;
 *            printf("b: %d\tsum: %d\tp: %d\tq: %d\n", b,sum,p,q);
 *            switch (tokens[p-2].type)
 *            {
 *                case RULE_ADD:return eva(p,q,sum+b);
 *                case RULE_SUB:return eva(p,q,sum-b);
 *                case RULE_MUL:return eva(p,q,sum*b);
 *                case RULE_DIV:if (b==0){
 *                    err_exp=1;
 *                    fputs("Divisor cannot be zero!\n", stderr);
 *                    return -1;
 *                    }
 *                    return eva(p,q,sum/b);
 *                case RULE_NE:return eva(p,q,sum!=b);
 *                case RULE_EQ:return eva(p,q,sum==b);
 *            }
 *        }
 *    }
 *    else
 *    {
 *        return eva(pp,qq,sum);
 *    }
 *    return 0;
 * }*/

uint32_t expr(char *e, bool *success) {
  if (strcmp("clear",e)==0) {
    clear_var();
  }
  if(!make_token(e)) {
    *success = false;
    return 0;
  }
  long result=eval(0,nr_token-1,success);
  if (*success==true) {
    printf("%ld\n", result);
  }
  // printf("%d\n", eva(0,nr_token-1,0));
  
  /* TODO: Insert codes to evaluate the expression. */
  //panic("please implement me");
  return 0;
}
