#include <stdlib.h>

/**
 * _abs - computes the absolute value
 * @i: the number to compute
 * Return: absolute value
 */
#ifndef ABS 
#define ABS(x) _abs(int x)\
		{\
			if (x < 0)\
			{\
				return (x * (-1));\
			}\
			else if (x == 0)\
			{\
			return (0);\
			}\
			else\
			{\
				return (x);\
			}\
		}
#endif
