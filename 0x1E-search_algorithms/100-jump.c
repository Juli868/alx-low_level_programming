#include "search_algos.h"
#include <math.h>
#include <stdio.h>
/**
 * jump_search - searches in an array jumping a certain indexes.
 * @size: size of the array
 * @value: what to look for.
 * Return: -1 if not found or index.
 */
int jump_search(int *array, size_t size, int value)
{
	int steps, start = 0;

	if (array == NULL)
		return (-1);
	steps = sqrt(size);

	while (array[steps] < array[start] && (size_t)start < size)
	{
		if ((size_t)(size_t)steps < size)
		{
			start = steps;
			printf("Value checked array[%d] = [%d]\n", start, array[start]);
			steps += steps;
		}
		if ((size_t)steps > size)
		       steps = size;
	}
	printf("Value found between indexes [%d] and [%d]\n", start, steps);
	while (start < steps)
	{
		if (array[start] == value)
			 return (start);
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		start++;
	}
	return (-1);
}
