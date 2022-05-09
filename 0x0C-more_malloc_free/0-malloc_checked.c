#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: parameter to malloc_checked
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
