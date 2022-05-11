#include "dog.h"

/**
 * init_dog - initialize dog structure
 * @d: structure variable
 * @name: parameter for name of dog
 * @age: parameter for age of dog
 * @owner: parameter for owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
