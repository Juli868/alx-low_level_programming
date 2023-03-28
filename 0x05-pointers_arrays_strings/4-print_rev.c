#include "main.h"

/**
 *print_rev - wi print a string in  reverse
 *@s: array t be reversed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
