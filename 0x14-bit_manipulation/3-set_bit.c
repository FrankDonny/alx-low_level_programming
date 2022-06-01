#include "main.h"

/**
 * set_bit - This function replaces a bit number with 1
 * @n: the number the operation is to be performed on
 * @index: the index to be changed
 * Return: n on success, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;
	if (index > 63)
		return (-1);
	*n = *n | (i << index);
	return (*n);
}
