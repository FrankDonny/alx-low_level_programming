#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints out the dog structure
 * @d: parameter to the print_dog structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	} else if (d->name == NULL)
	{
		printf("Name: (nil)");
	} else if (d->age == '\0')
	{
		printf("Age: (nil)");
	} else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
