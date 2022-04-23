#include "main.h"



void reverse_array(int *a, int n)
{
	int temp = 0, i, d = n - 1;
	
	for (i = 0; i < d; i++)
	{
		temp = a[i];
		a[i] = a[d];
		a[d] = temp;
		d--;
	}
}
