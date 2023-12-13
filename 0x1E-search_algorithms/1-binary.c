#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
int binary_search(int *array, size_t size, int value)
{
	size_t half;
	if (array == NULL)
		return (-1);
	if (array[size] == value)
		return ((int)size);
	half = size / 2;
	size = size - half;
	if (half > 0)
	{
		if(value < array[half])
			binary_search(array, half, value);
		else 
			binary_search(&array[half], size, value);
	}
	return (-1);
}
