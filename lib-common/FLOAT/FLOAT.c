#include "FLOAT.h"

static union {
	 struct {
		 unsigned m : 23;
		 unsigned e : 8;
		 unsigned s : 1;
	 } split;
	 struct {
		 unsigned f : 16;
		 unsigned i : 15;
		 unsigned s : 1;
	 } split_u;
	 unsigned u;
 } tmp_float;

FLOAT F_mul_F(FLOAT a, FLOAT b) {
	return (a*b)>>16;
	//nemu_assert(0);
	//return 0;
}

FLOAT F_div_F(FLOAT a, FLOAT b) {
	/* Dividing two 64-bit integers needs the support of another library
	 * `libgcc', other than newlib. It is a dirty work to port `libgcc'
	 * to NEMU. In fact, it is unnecessary to perform a "64/64" division
	 * here. A "64/32" division is enough.
	 *
	 * To perform a "64/32" division, you can use the x86 instruction
	 * `div' or `idiv' by inline assembly. We provide a template for you
	 * to prevent you from uncessary details.
	 *
	 *     asm volatile ("??? %2" : "=a"(???), "=d"(???) : "r"(???), "a"(???), "d"(???));
	 *
	 * If you want to use the template above, you should fill the "???"
	 * correctly. For more information, please read the i386 manual for
	 * division instructions, and search the Internet about "inline assembly".
	 * It is OK not to use the template above, but you should figure
	 * out another way to perform the division.
	 */

	 union {
		 struct {
			 unsigned d;
			 unsigned a;
		 };
		 long long c;
	 } tmp;
	 tmp.c = (((long long)a) << 16);
	 FLOAT result;
	 int q;
	 asm volatile ("idiv %2" : "=a"(result), "=d"(q) : "r"(b), "a"(tmp.a), "d"(tmp.d));
	 return result;
	//nemu_assert(0);
	//return 0;
}

FLOAT f2F(float a) {
	/* You should figure out how to convert `a' into FLOAT without
	 * introducing x87 floating point instructions. Else you can
	 * not run this code in NEMU before implementing x87 floating
	 * point instructions, which is contrary to our expectation.
	 *
	 * Hint: The bit representation of `a' is already on the
	 * stack. How do you retrieve it to another variable without
	 * performing arithmetic operations on it directly?
	 */
	 unsigned *p_a=(unsigned*)&a;
	 tmp_float.u=*p_a;
	 if (tmp_float.split.e==0){
		 return 0;
	 }
	 else if(tmp_float.split.e==0xff){
		 return tmp_float.split.s ? -0x7fffffff : 0x7fffffff;
	 }
	 else {
		 int e = (int)tmp_float.split.e - 134;
		 unsigned m = (tmp_float.split.m | 0x800000);
		 int sum = (e >= 0) ? (m << e) : (m >> -e);
		 return  (tmp_float.split.s ? -sum : sum );
	 }

	//nemu_assert(0);
	//return 0;
}

FLOAT Fabs(FLOAT a) {
	tmp_float.u = (unsigned)a;
	return (tmp_float.split_u.s) ? -a : a;
	//nemu_assert(0);
	//return 0;
}

/* Functions below are already implemented */

FLOAT sqrt(FLOAT x) {
	FLOAT dt, t = int2F(2);

	do {
		dt = F_div_int((F_div_F(x, t) - t), 2);
		t += dt;
	} while(Fabs(dt) > f2F(1e-4));

	return t;
}

FLOAT pow(FLOAT x, FLOAT y) {
	/* we only compute x^0.333 */
	FLOAT t2, dt, t = int2F(2);

	do {
		t2 = F_mul_F(t, t);
		dt = (F_div_F(x, t2) - t) / 3;
		t += dt;
	} while(Fabs(dt) > f2F(1e-4));

	return t;
}
