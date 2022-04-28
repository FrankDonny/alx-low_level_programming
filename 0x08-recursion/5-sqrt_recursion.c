#include "main.h"

int _sqrt_recursion(int n)
{
	int i = -1;

	if (n == 1)
	{
		return (n);
	}
	else
		return n - _sqrt_recursion(n - (i += 2));
}
