#include "main.h"

/**
 * reverse_array - reverses arrays
 * @a: arg
 * @n: arg
 */

void reverse_array(int *a, int n)
{
	int temp = 0;
	int i;
	int d = n - 1;

	for (i = 0; i < d; i++)
	{
		temp = a[i];
		a[i] = a[d];
		a[d] = temp;
		d--;
	}
}
