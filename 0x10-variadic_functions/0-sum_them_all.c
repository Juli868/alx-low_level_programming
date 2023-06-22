#include "variadic_functions.h"
/**
 * sum_them_all - will cacuate the sum of given arguments
 * @n: the number of arguments to consider
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter, sum;
	va_list mine;

	va_start(mine, n);
	sum = 0;
	for (counter = 0; counter < n; counter++)
	{
		sum = sum + va_arg(mine, unsigned int);
	}
	return (sum);
}
