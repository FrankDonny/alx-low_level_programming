#include "main.h"

/**
 * print_last_digit - indicates if letter is caps or lower case
 * @i: is an arg
 * Return: last digit
 */

int print_last_digit(int i)

{
int last_digit;

if (i < 0)
{
last_digit = (-1 * (n % 10));
_putchar (last_digit + '0');
return (last_digit);
}

else
{
last_digit = (i % 10);
_putchar (last_digit + '0');
return (last_digit);
}

}
