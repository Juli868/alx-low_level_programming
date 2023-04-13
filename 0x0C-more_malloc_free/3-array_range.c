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
	int i;

	p = malloc(sizeof(int) * (min + max));
	if (min > max)
		return (NULL);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	p[i + 1] = max;
	return (p);
}
