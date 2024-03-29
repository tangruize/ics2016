#include "trap.h"
#include "FLOAT.h"

FLOAT f(FLOAT x) {
	/* f(x) = 1/(1+25x^2) */
	FLOAT a;
	//set_bp();
	a=F_mul_F(x, x);
	if (x==65536)
		nemu_assert(a == 65536);
	a=F_mul_int(a, 25);
	if (x==65536)
		nemu_assert(a == 1638400);
	a=int2F(1)+a;
	if (x==65536)
		nemu_assert(a == 1703936);
	a=F_div_F(int2F(1), a);
	if (x==65536)
		nemu_assert(a == 2520);
	//F_div_F(int2F(1), int2F(1) + F_mul_int(F_mul_F(x, x), 25));
	return a;
}

FLOAT computeT(int n, FLOAT a, FLOAT b, FLOAT (*fun)(FLOAT)) {
	nemu_assert(n == 10);
	nemu_assert(a == 0xffff0000);
	nemu_assert(b == 65536);
	int k;
	FLOAT s,h;
	h = F_div_int((b - a), n);
	nemu_assert(h == 13107);
	s = F_div_int(fun(a) + fun(b), 2 );
	nemu_assert(s == 2520);
	for(k = 1; k < n; k ++) {
		s += fun(a + F_mul_int(h, k));
	}
	nemu_assert(s == 180634);
	s = F_mul_F(s, h);
	nemu_assert(s == 36126);
	return s;
}

int main() {
	FLOAT a = computeT(10, f2F(-1.0), f2F(1.0), f);
	FLOAT ans = f2F(0.551222);

	nemu_assert(Fabs(a - ans) < f2F(1e-4));

	return 0;
}
