#include "main.h"

/**
 * print_sign - indicates the sign of a particular number
 * @n: is the arg
 * Return: 1 if the letter is lower, else returns 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
}
