#include "main.h"

/**
 * _memcpy - copies bytes from memory area to destination
 * @dest: arg
 * @src: arg
 * @n: arg
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		src[a] = dest[a];
	return (dest);
}
