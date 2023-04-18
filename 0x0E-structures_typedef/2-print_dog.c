#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *print_dog - prints the information about the dog
 *@d: the location of the struct
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name:(nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner:(nil)");
	}
	if (d == NULL)
	{
		;
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", (d)->name, (d)->age, (d)->owner);
	}
}
