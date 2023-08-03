#include "main.h"
/**
 * binary_to_uint - calculates the decimal number of a given binary
 * @b: binary to find its corresponding int
 * Return: calculated int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int counter, value = 0;

	if (b == NULL)
		return (0);
	for (counter =0; b[counter]; counter++)
	{
		if (b[counter] > '1' || b[counter] < '0')
			return (0);
		value = 2 * value + (b[counter] - '0');
	}
	return (value);
}
