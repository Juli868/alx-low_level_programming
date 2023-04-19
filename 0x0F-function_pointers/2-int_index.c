#include "function_pointers.h"
/**
 *int_index - will look for an integer place
 *@array: address of array to look into
 *@size: number of elements in the array
 *@cmp: pointyer to use
 *Return: -1 if error occurred or the placce value of the current number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (1)
}
