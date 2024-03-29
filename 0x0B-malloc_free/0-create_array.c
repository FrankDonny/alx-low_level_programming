#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: parameter to create_array
 * @c: parameter to create_array
 * Return: 0 or NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
