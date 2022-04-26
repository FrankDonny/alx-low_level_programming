#include "main.h"
#include <string.h>

/**
 * _memset - fills  memory with constant byte
 * @s: arg
 * @b: arg
 * @n: arg
 */

char *_memset(char *s, char b, unsigned int n)
{
	char* p=s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
