#include "main.h"
/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	char a;

	for (a = 97; a < 123; a++)
		alpha(a);
	alpha('\n');
	return (0);
}
