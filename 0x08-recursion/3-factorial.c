#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: arg
 * Return: returns the values
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (n);
	}
	else if (n >= 0)
	{
		return (n * factorial(n - 1));
	}
	return (-1);
}
