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
/**
 * check - will verify the given string its palidromality
 * @s: string to check
 * @a: length of the string
 * @d: strarting point
 * Return: 0 if not palidrome else 1
 */
int check(char *s, int a, int d)
{
	if (s[d])
	{
		if (s[d] == s[a])
			check(s, (a - 1), (d + 1));
		else
			return (0);
	}
	return (1);
}

/**
 * is_palindrome - will check if provided string is palidrome
 * @s: string to check
 * Return: 1 if true or 0 if not
 */
int is_palindrome(char *s)
{
	int counter, len;

	counter = 0;
	len = _strlen_recursion(s);
	return (check(s, len, counter));
}
