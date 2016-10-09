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
    int i=akm(3,8);
		nemu_assert(i == 2045);
    return 0;
}
