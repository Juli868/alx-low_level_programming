#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
*_putchar - will print aa character to the console
*@c: character to be printed
*Return: with 1 if succeeded
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
