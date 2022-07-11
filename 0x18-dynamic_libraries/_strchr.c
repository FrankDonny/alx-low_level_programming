#include "main.h"
#include <string.h>

/**
 * _strchr - points to a char
 * @s: arg
 * @c: arg
 * Return: i
 */

char *_strchr(char *s, char c)
{
	char *i = NULL;

	if (s != NULL)
	{
		do {
			if (*s == c)
			{
				i = s;
				break;
			}
		} while (*s++);
	}
	return (i);
}
