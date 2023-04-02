#include <stdio.h>
#include "main.h"
/**
 print_most_numbers - prints numbers 0 to 9 excluding 2,4
 *_putchar - prints on the console
 */
void print_most_numbers(void)
{
	int c;

	for (c = 47; c < 58 ; c++)
	{
		if (c != 50 || c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
