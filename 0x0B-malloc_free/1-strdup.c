#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - duplidcates a string
 *@str: string to copy
 *Return: the cpied string
 */
char *_strdup(char *str)
{
	char *p;
	int i, size;

	i = 0;
	size = 0;
	while (str[i])
	{
		i++;
	}
	p = malloc(sizeof(char) * i);
	if (i > 1)
	{
		while (size < i)
		{
			p[size] = str[size];
			size++;
		}
	}
	else
	{
		return (NULL);
	}
	return (p);
}
