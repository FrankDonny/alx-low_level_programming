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
	int i, mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
