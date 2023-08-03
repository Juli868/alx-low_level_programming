#include "main.h"
/**
 * print_binary - prints a binary number equal to the provided decimal
 * @n: number to print its binary equivalent
 */
void print_binary(unsigned long int n)
{
	int checker, counter = 0;
	unsigned long int current;

	for (checker = 63; checker >= 0; checker--)
	{
		current = n >> checker;

		if (current & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}

