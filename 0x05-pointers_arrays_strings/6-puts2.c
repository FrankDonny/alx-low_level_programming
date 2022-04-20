#include "main.h"
#include <string.h>

/**
 * puts2 - print any other number
 * @str: arg
 */

void puts2(char *str)
{
	int i, a;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		a = str[i];
		if (i % 2 != 0)
		{
			continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}
