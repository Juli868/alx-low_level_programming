#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - will free the pointer
 *@d: the pointer to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		free(d);
	else
	{
		d = NULL;
		free(d);
	}

}
