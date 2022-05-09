#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory
 * @nmemb: parameter to _calloc
 * @size: parameter to _calloc
 * Return: NULL if error, else ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if ptr == NULL
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
