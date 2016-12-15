#include "irq.h"

#include <sys/syscall.h>

void add_irq_handle(int, void (*)(void));
uint32_t mm_brk(uint32_t);
int fs_ioctl(int, uint32_t, void *);
void serial_printc(char);

static void sys_brk(TrapFrame *tf) {
	tf->eax = mm_brk(tf->ebx);
}

static void sys_ioctl(TrapFrame *tf) {
	tf->eax = fs_ioctl(tf->ebx, tf->ecx, (void *)tf->edx);
}

ssize_t sys_write(int fd, const void *buf, size_t len) {
	/*asm	volatile(".byte	0xd6"	:	:	"a"(2),	"b"(fd), "c"(buf),	"d"(len));
	int val;
	asm volatile("movl %%eax, %0" : "=r"(val));
	return val;*/
	int i =0;
	const char *p = buf;
	for (;i<len;++i) {
		serial_printc(p[i]);
	}
	return len;
}

void do_syscall(TrapFrame *tf) {
	switch(tf->eax) {
		/* The `add_irq_handle' system call is artificial. We use it to
		 * let user program register its interrupt handlers. But this is
		 * very dangerous in a real operating system. Therefore such a
		 * system call never exists in GNU/Linux.
		 */
		case 0:
			cli();
			add_irq_handle(tf->ebx, (void*)tf->ecx);
			sti();
			break;

		case SYS_brk: sys_brk(tf); break;
		case SYS_ioctl: sys_ioctl(tf); break;
		case 4:
			tf->eax = sys_write(tf->ebx, (void*)tf->ecx, tf->edx);
			break;

		/* TODO: Add more system calls. */

		default: panic("Unhandled system call: id = %d, eip = 0x%08x", tf->eax, tf->eip);
	}
}
