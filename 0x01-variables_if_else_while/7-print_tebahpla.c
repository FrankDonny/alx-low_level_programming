#include <stdio.h>
/**
 *main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 57; i >= 48; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
