#include "main.h"
/**
 * _isupper - determines if a character is a uppercase
 *
 * @c: is the integer
 *
 * Return: 1 when it is an uppercase, 0 when otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
