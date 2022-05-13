#include "function_pointers.h"

/**
 * print_name - function name
 * @name: parameter to function
 * @f: callback function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
