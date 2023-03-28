#include "main.h"
#include <unistd.h>

/**
 *_putchar - will print to the terminal
 *@c: the character to be printed
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
