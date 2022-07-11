#include "main.h"
/**
 *_memcpy -   copy number bytes form adress "from" to adress "to"
 *@dest: arg
 *@src: arg
 *@n: arg
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}

	return (dest);
}
