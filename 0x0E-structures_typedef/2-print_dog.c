#include "dog.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 *print_dog- displays on console elements of struct
 *@d: address of the struct to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if ((*d).name == NULL)
			(*d).name = "(nil)";
		if ((*d).owner == NULL)
			(*d).owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
