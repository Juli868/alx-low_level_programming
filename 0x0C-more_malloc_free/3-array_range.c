#include "main.h"
/**
 * array_range - will create an array
 * @min: first element
 * @max: last element
 * Return: created array
 */
int *array_range(int min, int max)
{
	int difference, counter;
	int *array;

	if (min > max)
		return (NULL);
	difference = (max - min) + 1;
	array = malloc(difference * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (counter = 0; counter < difference; counter++)
		array[counter] = min + counter;
	return (array);
	free(array);
}
