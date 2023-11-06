#include "main.h"
#include <stdio.h>

/**
 *times_table - will print the first 10 multiplication table
 */
void times_table(void)
{
	int i, k;
	int prod = 0;

	for (i = 0; i < 10; i++)
	{
		prod = i;
		for (k = 0; k < 10; k++)
		{
			_putchar(prod + '0');
			
			if (k != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			prod = i* k;
		}
		_putchar('\n');
	}
}
