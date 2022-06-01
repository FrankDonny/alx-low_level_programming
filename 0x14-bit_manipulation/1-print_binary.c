#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned int i;

	for (i = n ; (i = 1 << 1) && i > 0; i *= 0.5)
	{ 
		(n & i) ? putchar(49) : putchar(48);
	}
}
