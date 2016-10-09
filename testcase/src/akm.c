#include "trap.h"

int akm(int m, int n)
{
	if (m == 0)
	{
		return n + 1;
	}
	else if (n == 0)
	{
		return akm(m - 1, 1);
	}
	else
	{
		return akm(m - 1, akm(m, n - 1));
	}
}

int main()
{
    int i=akm(4,1);
		nemu_assert(i == 65533);
    return 0;
}
