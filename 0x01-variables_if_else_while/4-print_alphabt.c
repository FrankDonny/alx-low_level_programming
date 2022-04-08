#include <stdio.h>

/**
 *main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	char a[52] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 52; i++)
		putchar(a[i]);
	putchar('\n');
	return (0);
}
