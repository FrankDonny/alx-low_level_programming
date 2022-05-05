#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - duplicates string
 * @str: parameter passed to strdup
 * Return: NULL if error, dest if success
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int n = strlen(str) + 1;

	dest = malloc(sizeof(char) * n);
	
	if (dest == NULL)
		return (NULL);

	strcpy(dest, str);
	return (dest);
}
