#include <stdio.h>
#include "main.h"
/**
*_putchar - will print aa character to the console
*@c: character to be printed
*Return: with 1 if succeeded
*/
int _putchar(char c)
{
	return (fwrite(1, &c, 1));
}
