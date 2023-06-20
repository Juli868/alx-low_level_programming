#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - will give values to elements of struct defined
 *@d: struct name defined
 *@name: name to be set
 *@age: age to set
 *@owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

