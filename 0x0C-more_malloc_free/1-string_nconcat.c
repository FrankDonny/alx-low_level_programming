#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len_s1 = strlen(s1), len_s2 = strlen(s2), len3;
	char *ptr;

	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		if (n >= len_s2)
		{
			strcat(s1, s2);
		}
		else 
			s1[len_s1 + i] = s2[i];
		s1[len_s1 + i] = '\0';
	}
	len3 = strlen(s1);


	ptr = malloc(sizeof(char) * len3);

	if (ptr == NULL)
		return (NULL);
	else if (len_s1 == '\0')
		return ("");

	return (ptr);
}
