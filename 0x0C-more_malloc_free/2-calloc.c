#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocates a memory
 *@nmemb: number of elements
 *@size: size f each element
 *Return: the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(nmemb * size);
		for  (i = 0; i < (nmemb * size); i++)
		{
			p[i] = 0;
		}
	}
	return (p);
}
