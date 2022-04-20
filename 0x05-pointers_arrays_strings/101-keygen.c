#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0 always
 */

int main(void)
{
	srand(time(NULL));
	printf("%d\n", rand());
	return (0);
}
