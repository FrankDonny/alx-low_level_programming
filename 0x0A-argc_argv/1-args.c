#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument to main function
 * @argv: argument to main function
 * Return: 0 for success
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
