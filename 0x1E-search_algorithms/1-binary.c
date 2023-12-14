#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
/**
 *binary_search - searches in the array a value using binary method
 *@array: array to look into
 *@size: size of the array
 *@value: value to look for
 *Return: the index of the value or -1 if an error occured
 */
int binary_search(int *array, size_t size, int value)
{
	size_t half, left, right;

	if (array == NULL)
		return (-1);
	right = size;
	left = 0;
	while (left <= right)
	{
		half = (left + right) / 2;
		if (value > array[half])
			left = half;
		else if (value < array[half])
			right = half;
		else
			return (half);
		
	}
	return (-1);
}
