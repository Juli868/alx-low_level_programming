#include "main.h"
#include <string.h>
/**
 * print_string -helps in printing the given string
 * @a: string to print from behind
 * @len:lemght of the string
 */
void print_string(char *a, int len)
{
	if (len > 0)
	{
		_putchar(a[len]);
		print_string(a, len - 1);
	}

}
/**
 *_print_rev_recursion - returns the string from behind
 *@s: string to print
 */
void _print_rev_recursion(char *s)
{
	int len;

	len = strlen(s);
	if (s == NULL)
		return;
	print_string(s, len - 1);
	_putchar('\n');
}
