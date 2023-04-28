#include "main.h"
/**
 *_strlen_recursion - shows the length of the string provided
 *@s: the address of the string
 *Return: the length of the string in int
 */
int _strlen_recursion(char *s)
{
	int counter;

	counter = 0;
	if (*s != '\0')
	{
		counter++;
		counter += _strlen_recursion(s + 1);
	}
	return (counter);
}
