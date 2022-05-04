#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function
 * @argc: argument to main
 * @argv: argument to main
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
