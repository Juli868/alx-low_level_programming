#include "main.h"
/**
 *create_array - will create an array of a certain characters and initialise it
 *@size: size of the array
 *@c: char to initialize it with
 *Return: address of the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int counter = 0;
	char *array;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		printf("failed to allocate memory");
	}
	else
	{
		while (size > counter)
		{
			array[counter] = c;
			counter++;
		}
	}
	return (array);
	free(array);
}
