#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - searches in an array liearly.
 * @array: first element
 * @size: size of the array
 * @value: value to look for
 * Return: -1 if not found or the first position
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int res;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			res = (int)i;
			return (res);
		}
	}
	return (-1);
}
