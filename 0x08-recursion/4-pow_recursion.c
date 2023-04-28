#include "main.h"
/**
 *_pow_recursion - will calculate the number given to the power given
 *@x: the number to calculate for
 *@y: the power to the x
 *Return: the final result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0 && x != 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
