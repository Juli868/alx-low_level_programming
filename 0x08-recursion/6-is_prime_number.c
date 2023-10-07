#include "main.h"
#include <math.h>
/**
 *prime_counter - is the finder for prime number
 *@n: number to checker
 *@i: counter for divors
 *@counter: number to check if divior
 *Return: 1 for true or 0 if not
 */
int prime_counter(int n, int counter)
{
	int pre, i;

	pre = pow(counter,n) - counter;
	i = pre % n;
	if (i == 0)
		return (1);
	return (0);
}
/**
 * is_prime_number - will tell if the number provided is prime or not
 * @n: number to check
 * Return: 1 if true else 0
 */
int is_prime_number(int n)
{
	int counter = 1;

	if (n > 0)
		return (prime_counter(n, counter));
	else
		return (0);
}
