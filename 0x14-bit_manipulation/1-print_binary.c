#include "main.h"

/**
 * print_binary - This function prints the binary representation of a number
 * @n: The number that its binary representation to be printed
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = n ; i; i *= 0.5)
		(n & i) ? _putchar(49) : _putchar(48);
}
