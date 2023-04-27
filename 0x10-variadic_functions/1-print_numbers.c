#include <stdio.h>
#include"variadic_functions.h"
/**
 *print_numbers - prints onto the screen the given numbers
 *@separator: the symbol that differentiate numbers
 *@n: number of numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(args);
	va_start(args, n);
	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}