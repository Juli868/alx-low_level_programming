#include "main.h"
#include <stdlib.h>
/**
 *finder - checks if a number is a root of a number
 *@n:number to find its root
 *@counter:base number to start from
 *Return: found root
 */
int finder(int n, int counter)
{
	if ((counter * counter) == n)
		return (counter);
	if ((counter * counter) > n)
		return (-1);
	return (finder(n, counter + 1));
}
/**
 *_sqrt_recursion - calculates the squareroot of  number
 *@n: number to find its squareroot
 *Return: the found root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (finder(n, 0));
}
