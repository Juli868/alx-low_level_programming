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
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	(new_dog)->name = name;
	(new_dog)->age = age;
	(new_dog)->owner = owner;
	return (new_dog);
	free(new_dog);
}
