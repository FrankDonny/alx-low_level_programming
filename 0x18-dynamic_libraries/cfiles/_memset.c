#include "main.h"
/*#include <string.h>*/

/**
 * _memset - fills memory space with const bytes
 * @s: arg
 * @b: arg
 * @n: arg
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
