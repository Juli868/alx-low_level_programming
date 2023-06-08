#include "main.h"
/**
 *
 *
 *
 */
int finder(int n, int counter)
{
	if (n < 0)
		return (-1);
	else 
	{
		if ((counter * counter ) == n)
		      return (counter);
		else
			finder(n, counter++);
	}
	return (counter);
}
/**
 *
 *
 *
 */
int _sqrt_recursion(int n)
{
	int counter = 0;

	return (finder(n, counter));
}
