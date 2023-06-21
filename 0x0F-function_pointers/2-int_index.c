#include "function_pointers.h"
/**
 *int_index - looks for similar int in an array
 *@array: array to check
 *@size: size of the array
 *@cmp:function t d the task
 *Return: the vaue psitin
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter, ans;

	ans = 0;
	if (size <= 0 || array == NULL)
		return (-1);
	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]) != 0)
		{
			ans = counter;
			break;
		}

	}
	if (ans == 0)
		return (-1);
	return (ans);
}
