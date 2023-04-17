#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - provides the vaue to all elements of the structure dog
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 * @d: pointer to thee structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
