#include <stdio.h>
#include "main.h"
/**
* print_most_numbers - prints numbers 0 to 9 excluding 2,4
*_putchar - prints on the console
*/
void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10 ; c++)
	{
		if (c != 4 && c != 2)
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
