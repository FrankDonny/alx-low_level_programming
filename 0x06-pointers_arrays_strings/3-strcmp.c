#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: arg
 * @s2: arg
 * Return: return values respectively
 */

int _strcmp(char *s1, char *s2)
{
	int n = 2;

	if (s1 < s2)
		return (-n);
	else if (s1 == s2)
		return (0);
	else
		return (n);
}
