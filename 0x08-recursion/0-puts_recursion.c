#include "main.h"
/**
 *_puts_recursion - will bring the character on the std out
 *@s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
}
