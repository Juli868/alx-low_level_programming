#include"main.h"
/**
 * malloc_checked - allocates memory of a given number
 * @b:value to allocate
 *Return: the allocated address
 */
void *malloc_checked(unsigned int b)
{
	int *address;

	address = malloc(b);
	if (address == NULL)
		exit(98);
	return (address);
	free(address);
}
