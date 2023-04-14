#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *array_range - shows the addres by which the array may possibly take
 *@min: first element
 *@max: last element
 *Return: the allocated memory
 */
int *array_range(int min, int max)
{
	int *p;
	int i, length;

	length = max - min + 1;
	p = malloc(sizeof(int) * length);
	if (min > max)
	{
		return (NULL);
		exit (0);
	}
	if (p == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
