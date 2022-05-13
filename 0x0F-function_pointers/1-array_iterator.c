#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterator function
 * @array: parameter containing the array
 * @size: parameter of size of array
 * @action: callback function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
