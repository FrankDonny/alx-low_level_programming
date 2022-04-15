#include "main.h"


void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 48 ; j <= 57; j++)
		{
			if (j > 57 && j <= (57 + 52))
			{
				_putchar(j + 49);
			} else
				_putchar(j);
		}
		_putchar('\n');
	}
}
