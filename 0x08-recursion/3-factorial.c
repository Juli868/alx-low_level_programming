#include "main.h"
/**
 *factorial - calculates the factoeial of a given number
 *@n: number to find its factorial
 * Return: the found factorial
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
		return (1);
	else
		return (-1);
}
