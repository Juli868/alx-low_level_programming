#include "main.h"
/**
 *real_finder - is the function that actually finds the length required
 *@s: the string to find lenght for
 *@counter: keeps the length found so far
 *Return: the founf length calculated
 */
int real_finder(char *s, int counter)
{
	if (s[counter])
	{
		counter++;
		return (real_finder(s, counter));
	}
	return (counter);
}
/**
 *_strlen_recursion - will calculate the length of a given string
 *@s: string to find its length
 *Return: the length in number
 */
int _strlen_recursion(char *s)
{
	int counter;

	counter = 0;

	return (real_finder(s, counter));
}
