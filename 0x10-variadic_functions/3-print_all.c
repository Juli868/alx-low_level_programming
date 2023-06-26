#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
 *print_all - will print all provided arguments
 *@format: how the arguments are arranged
 */
void print_all(const char * const format, ...)
{
	long unsigned int counter;
	va_list mine;

	counter = 0;
	va_start(mine,format);
	while (counter < (strlen(format)))
	{
		switch (format[counter])
		{
			case 'c':
				printf("%c", va_arg(mine, int));
				break;
			case 'f':
				printf("%f", va_arg(mine, double));
				break;
			case 'i':
				printf("%d", va_arg(mine, int));
				break;
			case 's':
				printf("%s", va_arg(mine, char*));
				break;
		}
		if (counter != (strlen(format) - 1))
				printf(",");
	}
	va_end(mine);
}
