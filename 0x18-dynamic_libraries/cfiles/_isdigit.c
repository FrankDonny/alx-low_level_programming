#include "main.h"

/**
 * _isdigit - determines if a character is a digit
 * @c: is the integer
 * Return: 1 when it is a digit, 0 when otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
