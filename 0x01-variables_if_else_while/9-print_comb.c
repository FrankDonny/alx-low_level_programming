#include <stdio.h>

/**
 *main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(' ');
		putchar(i);
		if (i != 57)
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}