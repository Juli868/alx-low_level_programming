#include "main.h"
/**
 *_puts_recursion - will print the given string using recursion
 *@s: address of the string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
