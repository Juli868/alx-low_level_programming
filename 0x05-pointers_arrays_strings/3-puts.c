#include "main.h"

/**
 *_puts - will print element of a string
 *@str: the string to be orinted
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
