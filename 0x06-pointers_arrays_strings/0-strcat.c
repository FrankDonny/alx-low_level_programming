#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate strings
 * @dest: arg
 * @src: arg
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
