#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - var functions to print strings
 * @separator: first argument
 * @n: second argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *ch;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(list, char*);

		printf("%s", ch);
		if (n - 1 == '\0')
                {
                        printf("(nil)");
                }
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
