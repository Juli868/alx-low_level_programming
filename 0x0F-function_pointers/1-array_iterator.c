#include "function_pointers.h"
/**
 * array_iterator - will do  a commanded task on each element
 * @array: array to work on
 * @size: size of the array
 * @action: what to do
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t counter;

	if (size > 0 && action != NULL && array != NULL)
	{
		for (counter = 0; counter < size; counter++)

			action(array[counter]);
	}
	else
		return;
}
