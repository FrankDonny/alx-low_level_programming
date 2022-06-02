#include "main.h"

int get_endianness(void)
{
	unsigned int a = 1;

	char *str = (char *) & a;
	if (*str)
		return (1);
	return (0);
}
