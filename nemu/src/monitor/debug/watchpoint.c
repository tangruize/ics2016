#include "monitor/watchpoint.h"
#include "monitor/expr.h"

#define NR_WP 32

static WP wp_pool[NR_WP];
static WP *head, *free_;

void init_wp_pool() {
	int i;
	for(i = 0; i < NR_WP; i ++) {
		wp_pool[i].NO = i;
		wp_pool[i].next = &wp_pool[i + 1];
	}
	wp_pool[NR_WP - 1].next = NULL;

	head = NULL;
	free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp() {
    if (free_==NULL) {
        fputs("No more free watchpoint pool!\n", stderr);
        return NULL;
    }
    else {
        WP* p=free_;
        free_=free_->next;
        p->next=NULL;
        if (head!=NULL) {
            p->next=head;
        }
        head=p;
        return p;
    }
}

void free_wp(WP *wp) {
    if (wp==NULL) {
        return;
    }
    else {
        WP* p=head;
        if (wp!=head) {
            for (;p!=NULL;p=p->next) {
                if (p->next==wp) {
                    break;
                }
            }
            if (p==NULL) {
                fputs("Cannot find the watchpoint!\n",stderr);
                return;
            }
            else {
                p->next=wp->next;
            }
        }
        else {
            head=head->next;
        }
        wp->next=free_;
        free_=wp;
    }
}
