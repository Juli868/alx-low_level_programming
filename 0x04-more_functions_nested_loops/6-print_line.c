#include "main.h"
/**
 *print_line - prints a line
 *@n: length of the line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('$');
	_putchar('\n');
}
