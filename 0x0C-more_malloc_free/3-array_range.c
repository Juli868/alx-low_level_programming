#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	p = malloc(sizeof(int) * (min + max));
	if (min > max)
		return (NULL);
	i = 0;
	while(min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
