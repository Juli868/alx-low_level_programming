#include "variadic_functions.h"
/**
 *sum_them_all - adds all number given and return the resut
 *@n: number of arguments to add
 *Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, add;

	add = 0;
	if (n <= 0)
	{
		return (0);
	}
	else
	{
		va_list(args);
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			add = add + va_arg(args, unsigned int);
		}
		va_end(args);
		return (add);
	}
}
