#include "main.h"
#include <string.h>

/**
 * _strncpy - copies strings of exact bytes
 * @dest: arg
 * @src: arg
 * @n: bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
