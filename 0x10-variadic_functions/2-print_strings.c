#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - prints all strings given to it
 *@separator: indicator of the end of t string
 *@n: number of arguments to give
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *juli;

	va_list(args);
	va_start(args, n);
	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		juli = (va_arg(args, char *));
		if (juli == NULL)
			printf("(nil)");
		printf("%s", juli);
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
