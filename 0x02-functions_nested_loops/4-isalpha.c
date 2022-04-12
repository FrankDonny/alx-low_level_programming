#include "main.h"

/**
 * _isalpha - indicates if letter is caps or lower case
 * @c: is the arg
 * Return: 1 if the letter is lower, else returns 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
