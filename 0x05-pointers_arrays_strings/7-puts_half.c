#include "main.h"
/**
 *puts_half - will print half the string
 *@str: the string which will be printed in half
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i])
	{
		i++;
	}
	j = i / 2;
	while (j <= i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
