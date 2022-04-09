#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int i, a;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (a = 97; a < 103; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
