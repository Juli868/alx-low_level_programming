#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - alloctes memory
 *@b: the length of the the memory allocation
 *Return: the location of the memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

       p= malloc(b);
       if (p == NULL)
		exit(98);
	return (p);
}
