#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 * Return: 0 always
 */
void print_alphabet(void)
{
	char a;

	for (a = 97; a < 123; a++)
		print_alphabet(a);
	print_alphabet('\n');
	return (0);
}
