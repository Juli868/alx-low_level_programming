#include "main.h"
/**
 * puts2 - prints half of the string
 * @str: string to be used
*/
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i])
	{
		i++;
	}
	i--;
	while (j <= i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
