#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - duplicates string
 * @s1: parameter passed to str_concat
 * @s2: parameter passed to str_concat
 * Return: NULL if error, newAlloc if success
 */

/**
* _strlen - returns the length of a string
* @s: string
* Return: String length
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s == '\0')
	{
		s++;
		count++;
		break;
	}
	return (count);
}

char *str_concat(char *s1, char *s2)
{
	char *newAlloc;
	unsigned int n, m;
	n = m = 0;
	n = _strlen(s1);
	m = _strlen(s2);

	newAlloc = malloc(sizeof(char) * (n + m));

	strcpy (newAlloc, (strcat(s1, s2)));
	/*strcat(newAlloc, curCat);*/
	return (newAlloc);

	if (newAlloc == NULL)
		return (NULL);
}
