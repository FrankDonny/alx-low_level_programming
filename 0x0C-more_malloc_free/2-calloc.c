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

	ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0 || ptr == NULL)
		return (NULL);

	return (ptr);
}
