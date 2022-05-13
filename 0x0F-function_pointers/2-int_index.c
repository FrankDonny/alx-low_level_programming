#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: parameter that has the array
 * @size: size of the array
 * @cmp: callback function
 * Return: value to various statements
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
