#include "search_algos.h"

/**
 * binary_search - function to run search using binary search
 * @array: array to run the search in
 * @size: the size of the array
 * @value: the value been searched
 * Return: return the index on success else -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t right = 0, left = 0, mid = 0, i;

	if (!array || size == 0)
		return (-1);

	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i == right)
				printf("\n");
			else
				printf(", ");
		}

		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
