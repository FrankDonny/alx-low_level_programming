#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all integers passed as argument
 * @n: number of count
 * Return: the value the function should give
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	if (n == 0)
	{
		return (0);
	}
	return (sum);

	va_end(nums);
}
