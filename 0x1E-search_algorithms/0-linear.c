#include "search_algos.h"

/**
 * linear_search - the linear search algorithm
 * @arr: the array to search within
 * @size: size of the array
 * @value: value to be searched for
 * Return: the index of the value on success else -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}
	return (-1);
}
