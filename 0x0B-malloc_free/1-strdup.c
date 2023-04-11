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
	p = malloc(sizeof(char) * i + 1);
	if (i > 0)
	{
		while (size <= i)
		{
			p[size] = str[size];
			size++;
		}
	}
	else
	{
		return (NULL);
	}
	free;
	return (p);
}
