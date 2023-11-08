#include "main.h"
/**
 *print_square - prints a square of #
 *@size: size of the square.
*/
void print_square(int size)
{
	int lenght, width;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (lenght = 0; lenght < size; lenght++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
