#include "main.h"
/**
 * print_triangle: prints a right angled triangle
 *@size: height of the triangle
*/
void print_triangle(int size)
{
	int si, i;

	if (size > 0)
	{
		for (i = size - 1; i > 0; i--)
		{
			_putchar(' ');
			si = 0;
		}
		while (i + si <= size)
		{
		       _putchar('#');	
		       si++;
		}
		       _putchar('\n');
	}
	else
		_putchar('\n');
}
