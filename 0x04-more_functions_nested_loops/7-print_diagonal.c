#include "main.h"
/**
 *print_diagonal - prints a diagonal line on the terminal
 *@n: number of times
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('$');
		_putchar('\n');
	}
}
