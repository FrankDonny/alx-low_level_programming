#include "main.h"

/**
 * print_line - should print a sraight line
 * @n: an integer
 */
void print_line(int n)
{
	int line;
	
	for (line = 0; line < n; line++)
	{
		_putchar(95);
		_putchar('\n');
	}
		if (n <= 0)
		{
			_putchar('\n');
		}
}

