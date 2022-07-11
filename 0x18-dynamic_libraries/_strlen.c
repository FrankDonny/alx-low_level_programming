#include "main.h"

/**
 * _strlen - returns with the lenght of a string
 * @s: pointer arg
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
