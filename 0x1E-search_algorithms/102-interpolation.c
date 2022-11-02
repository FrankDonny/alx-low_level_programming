#include "search_algos.h"

/**
 * interpolation_search - the search algorithm been used
 *
 * @array: the array to run the search in
 * @size: the number of elements in the array
 * @value: value to be searched
 * Return: on success return value index, otherwise return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	while ((array[high] != array[low]) && (value >= array[low])
			&& (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low)
				/ (array[high] - array[low]));
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	printf("Value checked array[%d] is out of range\n", high);
	return (-1);
}
