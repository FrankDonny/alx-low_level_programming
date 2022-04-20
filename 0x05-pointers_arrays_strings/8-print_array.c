#include "main.h"
#include <string.h>
#include <stdio.h>

void print_array(int *a, int n)
{
	int i;
	int len = strlen(a);

	for (n = 0; n < len; n++)
	{
		i = (char)a[n];
		printf("%d, ", i);
	}
}
