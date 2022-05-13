#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function name
 * @name: parameter to function
 * @f: callback function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
