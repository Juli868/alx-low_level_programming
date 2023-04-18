#include "dog.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
 void dog_t *new_dog(char *name, float age, char *owner)
{
	if (name != "NULL" && age !=  "NULL" && owner != "NULL")
	{
		dog.name = name;
		dog.age = age;
		dog.owner = owner;
	}
	else
	{
		return;
	}
