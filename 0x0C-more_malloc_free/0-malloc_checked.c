#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
 void *malloc_checked(unsigned int b)
{
	unsigned int *p;
	if (b <= 0)
		exit(98);
	else
		p = malloc(b * sizeof(unsigned int));
	return (p);
}
