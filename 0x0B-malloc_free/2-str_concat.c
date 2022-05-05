#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - duplicates string
 * @s1: parameter passed to str_concat
 * @s2: parameter passed to str_concat
 * Return: NULL if error, newAlloc if success
 */

char *str_concat(char *s1, char *s2)
{
	char *newAlloc;
	unsigned int n = strlen(strcat(s1, s2) + 1);

	newAlloc = malloc(sizeof(char) * n);
	newAlloc += *(strcat(s1, s2) + '\0');
	return (newAlloc);

	if (newAlloc == NULL)
		return (NULL);
}
