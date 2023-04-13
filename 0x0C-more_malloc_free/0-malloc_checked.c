#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - alloctes memory 
 *@b: the length of the the memory allocation
 *Return: the location of the memory
 */
 void *malloc_checked(unsigned int b)
{
	unsigned int *p;
	if (b > 0)
		p = malloc(b * sizeof(unsigned int));
	if (b <= 0)
		exit(98);
	return (p);
}
