#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: arg
 * @s2: arg
 * Return: return values respectively
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
		return (s1 - s2);
	else if (s1 == s2)
		return (s1-s2 || s2-s1);
	else
		return (s1 - (-s2));
}
