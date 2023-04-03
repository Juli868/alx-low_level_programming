#include "main.h"
#include <unistd.h>
/**
 *_putchar- prints a single character on the main display
 *@a: character to print
 i
 */
int _putchar (char a)
{
	return write(1, &a, 1);
}
