#include "main.h"

/**
 * _abs - computes the absolute value
 * @i: the number to compute
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
