#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - will print strings given
 * @n: number of strings to print
 *@separator: symbol to put between strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	char *new;
	va_list mine;

	va_start(mine, n);
	for (counter = 0; counter < n; counter++)
	{
		new = (va_arg(mine, char *));
		if (new == NULL)
			printf("(nil)");
		else if (counter != (n - 1) && separator != NULL)
		{
			printf("%s%s", new, separator);
		}
		else
			printf("%s", new);
	}
	printf("\n");
	va_end(mine);
}
