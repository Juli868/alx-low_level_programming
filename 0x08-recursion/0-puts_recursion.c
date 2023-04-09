#include "main.h"
/**
 *_puts_recursion - will bring the character on the std out
 *@s: string to print
 */
void _puts_recursion(char *s)
{
	int i;

	while (*s)
	{
		i++;
	}
	if (s[i])
	{
		_putchar(s[i]);
	}
	_puts_recursion(s[i - 1]);
}
