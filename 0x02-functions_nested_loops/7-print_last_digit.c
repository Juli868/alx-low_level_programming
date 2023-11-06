#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - will find the last value of a given number
 * @a: number to look its last digit
 * Return: last digit
 */
int print_last_digit(int a)
{
	int rem;

	rem = a % 10;
	_putchar(rem + '0');
	return (rem);
}
