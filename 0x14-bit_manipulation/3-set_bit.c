#include "main.h"
/**
 * set_bit - transforms the bit at a certain index to 1
 * @n: number to change
 * @index: number of index to look to
 * Return: 1 for success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;
	unsigned long int checker;

	bit = bit << (index);
	checker = (*n) | bit;
	if (checker < *n)
		return (-1);
	return (1);
}
