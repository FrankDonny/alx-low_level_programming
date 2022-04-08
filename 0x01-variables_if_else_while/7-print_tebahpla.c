#include <stdio.h>
/**
 *main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	char i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
