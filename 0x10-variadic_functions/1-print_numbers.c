#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_numbers - var functions to print numbers
 * @separator: first argument
 * @n: second argument
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		int ch = va_arg(list, int);

		printf("%d", ch);
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
		else if (separator == NULL)
		{
			;
		}
	}
	printf("\n");

	va_end(list);
}
