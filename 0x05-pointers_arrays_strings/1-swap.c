#include "main.h"

/**
 * swap_int - swaps integers
 * @a: an integer
 * @b: an integer
 */

void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
