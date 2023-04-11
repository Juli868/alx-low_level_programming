#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array -provided having the character provided as its elements.
 *@size: the size of the the array
 *@c: the caharacter fo all elements
 *Return: the created array or null if the size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	p = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	else if (size > 1)
	{
		while (i < size)
		{
			p[i] = c;
			i++;
		}
	}
	return (p);
}
