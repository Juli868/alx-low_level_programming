#include "main.h"
/**
 * is_prime - determines if the given number is a prime
 * @n: number to check
 * Return: 1 if true or 0 if false
 */
int is_prime_number(int n)
{
	int counter, copyn, checker;

	counter = 0;
	copyn = n;
	checker = 1;
	if (n < 2)
		return(0);
	if (n > 0)
	{
		if ((copyn % checker) == 0)
		{
			counter ++;
		}
		checker++;
		is_prime_number(n - 1);
	}
	if (counter == 2)
		return (1);
	return(0);
}
