#include "main.h"

/**
 * print_binary - This function prints the binary representation of a number
 * @n: The number that its binary representation to be printed
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int cur;

	for (i = 63; i >= 0; i--)
	{
		cur = n >> i;

		if (cur & 1)
		{
			_putchar(49);
			count++;
		}
		else if (count)
			_putchar(48);
	}
	if (n == 0)
		_putchar(48);
}
