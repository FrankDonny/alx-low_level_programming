#include "main.h"

void print_binary(unsigned long int n)
{
	int i;

	for (i = n ; i; i *= 0.5)
		(n & i) ? _putchar(49) : _putchar(48);
}
