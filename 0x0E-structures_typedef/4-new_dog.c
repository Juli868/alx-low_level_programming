#include "dog.h"
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
	dog.name = name;
	struct dog.age = age;
	struct dog.owner = owner;
	if (dog.name == NULL && dog.owner == NULL)
		return (NULL);
	return (dog);
}
