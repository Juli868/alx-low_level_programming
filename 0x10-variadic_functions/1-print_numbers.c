#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - will dispay on the console all number given as arguments
 * @separator: the symbol to put in between numbers
 * @n: number of numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list mine;

	va_start(mine, n);
	for(counter = 0; counter < n; counter++)
	{
		if (counter != (n-1))
			printf("%d%s",(va_arg(mine, int)), separator);
		else
			printf("%d",(va_arg(mine,int)));
	}
	printf("\n");
}
