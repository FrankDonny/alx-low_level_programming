#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new data type
 * @name: member of the structure
 * @age: member of the structure
 * @owner: member of the structure
 */

struct dog
{
	char *name;
	/**
	 * @name: name of struct
	 */
	float age;
	/**
	 * @age: age of struct
	 */
	char *owner;
	/**
	 * @owner: owner of struct
	 */
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t *new_dog(char *name, float age, char *owner);
 * void free_dog(dog_t *d);
 */

#endif
