#include "main.h"
/**
 * calloc - will alocate memory according to the given arguments
 *@nmemb: number of elements in ana array
 *@size: size of each element
 *Return: the address of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == 0)
		return (NULL);
	return (array);
	free(array);
}
