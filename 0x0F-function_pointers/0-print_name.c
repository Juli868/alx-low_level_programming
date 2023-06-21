#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - will displaye the name given
 * @name: name to print
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
