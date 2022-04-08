#include <stdio.h>

/**
 * main - the main function
 * Return: 0 after main function
 */

int main(void)
{
	int a;
	char b;
	float c;
	double d;

	printf("Size of a char: %lu\n", (unsigned long)sizeof(b));
	printf("Size of an int: %d\n", (signed int)sizeof(a));
	printf("Size of a long int: %ld\n", (long int)sizeof(b));
	printf("Size of a float: %f\n", (float)sizeof(c));
	printf("Size of a double: %lf\n", (double)sizeof(d));
	return (0);
}
