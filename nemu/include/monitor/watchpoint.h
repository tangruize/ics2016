#ifndef __WATCHPOINT_H__
#define __WATCHPOINT_H__

#include "common.h"
#include "expr.h"

typedef struct watchpoint {
  int NO;
  int key;
  int nr_tk;
  struct watchpoint *next;
  char str[32];
  Token resolved[32];
  /* TODO: Add more members if necessary */
  
  
} WP;

extern WP *head;
WP* new_wp();
void free_wp(WP *wp);

#endif
