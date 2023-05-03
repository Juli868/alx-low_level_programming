#include "main.h"
/**
 *_sqrt_recursion - calculates the squareroot of provided number
 *@n: the number to look for its squareroot
 *Return: the squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (calculator(n, 0));
}
/**
 * calculator - finds the calculator
 * @n: the number to look for
 * @counter: the checker to look for
 * Return: the actual number of of squareroot
 */
int calculator(int n, int counter)
{
	if ((counter * counter) == n)
		return (counter);
	if (counter * counter > n)
		return (-1);
	return (calculator(n, counter + 1));
}
