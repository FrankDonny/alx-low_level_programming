#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = (char*)malloc(sizeof(c) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	else
		return (ptr);
	free(ptr);
}
