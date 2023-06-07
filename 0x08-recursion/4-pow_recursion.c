#include "main.h"
/**
 *_pow_recursion - will calculate power of a number to another number
 *@x: number to find its power of
 *@y: power ofthe given number
 *Return: the calculated value
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0 && x != 0)
		return (1);
	else
		return (-1);
}
