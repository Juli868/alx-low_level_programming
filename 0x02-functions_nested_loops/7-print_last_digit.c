#include "main.h"
/**
 * print_last_digit - will find the last value of a given number
 * @a: number to look its last digit
 * Return: last digit
 */
int print_last_digit(int a)
{
	int rem;

	rem = a % 10;
	printf ("%d", rem);
	return (rem);
}
