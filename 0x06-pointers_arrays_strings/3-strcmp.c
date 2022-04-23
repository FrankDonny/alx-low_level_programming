#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: arg
 * @s2: arg
 * Return: return values respectively
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0; s1[n] != '\0' && s2[n] != '\0' && s1[n] == s2[n]; n++)
	;
	return (s1[n] - s2[n]);
}
