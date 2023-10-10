#include "main.h"
#include <math.h>
/**
 * _pow - finds the power pf two numbers
 * @a: base
 * @b: exponent
 * Return: the answer
 */
int _pow(int a, int b)
{
	int result = 0;

	if (b > 0)
		result = (a * _pow(a, b - 1));
	return (result);
}
/**
 *prime_counter - is the finder for prime number
 *@n: number to checker
 *@counter: number to check if divior
 *Return: 1 for true or 0 if not
 */
int prime_counter(int n, int counter)
{
	int pre, i;

	pre = _pow(counter, n) - counter;
	i = pre % n;
	if (i == 0)
		return (1);
	return (-1);
}
/**
 * is_prime_number - will tell if the number provided is prime or not
 * @n: number to check
 * Return: 1 if true else 0
 */
int is_prime_number(int n)
{
	int counter = 1;

	if (n > 1)
		return (prime_counter(n, counter));
	else
		return (0);
}

