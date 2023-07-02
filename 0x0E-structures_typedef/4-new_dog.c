#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *new_dog - creates a nwe dog
 *@name: name of the new dog
 *@age: age of the new dog
 *@owner: owner of the new dog
 *Return: the new created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(struct dog));
	if (new_d == NULL)
		return (NULL);
	(new_d)->name = name;
	(new_d)->age = age;
	(new_d)->owner = owner;
	return (new_d);
	free(new_d->name);
	free(new_d->owner);
	free(new_d);
}
