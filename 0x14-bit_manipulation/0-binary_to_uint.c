#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int dec = 0, rem, idx = 1, ch;
	size_t i;

	for(i = 0; i <= strlen(b); i++)
	{
		if (*b != 0)
			return (0);
		if (*b != 1)
			return (0);
		/*if (b == NULL)
			return (0);*/
	}

	ch = atoi(b);
	while (ch != 0)
	{
		rem = ch % 10;
		dec = dec + (rem*idx);
		ch = ch / 10;
		idx *= 2;
	}
	return ((unsigned int)dec);
}
