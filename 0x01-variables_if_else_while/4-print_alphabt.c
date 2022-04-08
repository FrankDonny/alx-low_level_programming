#include <stdio.h>

/**
 *main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	char a[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
		putchar(a[i]);
	putchar('\n');
	return (0);
}
