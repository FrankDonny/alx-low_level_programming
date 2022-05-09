#include "main.h"
#include <stddef.h>
#include <stdlib.h>



void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (b == '\0')
	{
		exit(98);
	}
	return (ptr);
}
