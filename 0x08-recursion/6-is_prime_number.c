#include "main.h"

int is_prime_number(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n < i)
		{
			return (0);
		} else if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
