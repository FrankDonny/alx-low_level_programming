#include "search_algos.h"

/**
 * jump_search - search algorithm using jump search
 * @array: array to run the search in
 * @size: the size of the array
 * @value: the figure to search for
 * Return: the index of the value on success, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = floor(sqrt(size)), ind1, i;

	for (ind1 = 0; ind1 < size; ind1 += jump)
	{
		printf("Value checked array[%d] = [%d]\n", (int)ind1, (int)ind1);
		if (array[ind1] == value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
					(int)(ind1 - jump), (int)ind1);
			return (ind1);
		}
		if (array[ind1] > value)
		{
			for (i = ind1; array[ind1] > value; i--)
			{
				printf("Value checked array[%d] = [%d]\n",
						(int)i, (int)i);
				ind1--;
			}
			printf("Value found between indexes [%d] and [%d]\n",
					(int)ind1 - 1, (int)(ind1 + jump - 1));
			return (ind1);
		}
	}
	printf("Value found between indexes [%d] and [%d]\n",
			(int)(ind1 - jump), (int)ind1);
	return (-1);
}
