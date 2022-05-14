#include "3-calc.h"

/**
 * op_add - function to add 2 integers
 * @a: parameter of an integer
 * @b: parameter of an integer
 * Return: the sum of each function
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract 2 integers
 * @a: parameter of an integer
 * @b: parameter of an integer
 * Return: the difference of the parameters
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multpiply 2 integers
 * @a: parameter of an integer
 * @b: parameter of an integer
 * Return: the product of the parameters
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to subtract 2 integers
 * @a: parameter of an integer
 * @b: parameter of an integer
 * Return: the outcome of function
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function to find the mod of 2 integers
 * @a: parameter of an integer
 * @b: parameter of an integer
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
