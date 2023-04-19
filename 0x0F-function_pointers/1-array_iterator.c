#include "function_pointers.h"
/**
*array_iterator - prints elements of an array
*@array: the address of the array
*@size: number of elements contained by the aray
*@action:pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
