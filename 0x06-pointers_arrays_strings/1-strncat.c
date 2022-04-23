#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate string
 * @dest: par
 * @src: par
 * @n: par
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
