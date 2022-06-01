#include "main.h"

/**
 * binary_to_uint - converts binary strings to unsigned int
 * @b: pointer pointing to the string
 * Return: dec on success, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}
	return (dec);
}
