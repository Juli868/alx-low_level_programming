#include "main.h"
/**
 * get_bit - finds if the bit at a certain index is defined r nt
 * @n: number to check
 * @index: index to look on
 * Return: 1 if defined, 0 if not else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int checker = 1;
	unsigned long int res;

	checker = checker << (index);
	res = n & checker;
	if (res < n)
		return (0);
	if (res >= n)
		return (1);
	return (-1);
}
