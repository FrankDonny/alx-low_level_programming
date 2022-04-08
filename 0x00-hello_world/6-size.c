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

	printf("Size of a unsigned char: %c\n", (unsigned char)sizeof(b));
	printf("Size of a signed char: %c\n", (signed char)sizeof(b));
	printf("Size of an signed int: %d\n", (signed int)sizeof(a));
	printf("Size of a long int: %ld\n", (long int)sizeof(b));
	printf("Size of a float: %f\n", (float)sizeof(c));
	printf("Size of a double: %lf\n", (double)sizeof(d));
	return (0);
}
