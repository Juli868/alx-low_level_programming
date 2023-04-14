#include "main.h"
#include <unistd.h>
/**
 *_putchar - prints a character on std output
 *@c: character to print
 *Return: one if unsuccessful
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
