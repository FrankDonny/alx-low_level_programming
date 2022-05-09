#include "main.h"
#include <stdlib.h>



void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0 || ptr == NULL)
		return (NULL);

	return (ptr);
}
