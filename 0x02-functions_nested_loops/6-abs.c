#include <stdlib.h>
#include "main.h"

/**
 * _abs - computes the absolute value
 * @i - the number to compute
 * Return: absolute value
 */

int _abs(int i)
{
	int i;

	if (i < 0)
	{
		return (i * (-1));
	}
	else if (i == 0)
	{
		return (0);
	}
	else
	{
		return (i);
	}
}
