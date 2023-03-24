#include <stdio.h>
#include "main.h"

/**
 * print_numbers - checks for checks for a digit (0 to 9).
 *_putchar - prints the number on the console
 * Return: Always 0.
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

