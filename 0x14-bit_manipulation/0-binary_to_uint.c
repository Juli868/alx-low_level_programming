#include "main.h"
/**
 * atoi - will transform a char into int
 * @s: char to transform
 * Return: the calculated number
 */
int atoi(char s)
{
	return (s);

}

/**
 * binary_to_uint - calculates the equivalent of the provided number to decimal
 * @b: string format of binary number
 * Return: found number
 */
unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int res;

	res = 0;
	if (b == NULL)
		return (0);
	for (counter = 0; b[counter]; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
		res = res * 2 + (b[counter] - '0');
	}
	return (res);
}
