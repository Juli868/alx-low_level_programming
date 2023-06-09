#include "main.h"
/**
 *_abs - calculates absolute value of a number
 *@a: number to find its absolute value
 *Return: The found value
 */
int _abs(int a)
{
	if (a >= 0)
	{
		a = a;
	}
	else if (a < 0)
	{
		a = -1 * a;
	}
	return (a);
}
