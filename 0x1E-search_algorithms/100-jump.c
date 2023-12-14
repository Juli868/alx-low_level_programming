#include "search_algos.h"
#include <math.h>
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
	root = sqrt(size);
	steps = root;

	while (steps < array[start] && start < size)
	{
		if (steps < array[steps])
		{
			start = steps;
			steps += steps;
		}
		if (steps > size)
		       steps = n;
	}	

}
