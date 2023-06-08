#include "main.h"
/**
 *prime_counter - is the finder for prime number
 *@n: number to checker
 *@i: counter for divors
 *@counter: number to check if divior
 *Return: 1 for true or 0 if not
 */
int prime_counter(int n, int i, int counter)
{
	if (counter <= n)
	{
		if (n % counter == 0)
			i++;
		prime_counter(n, i, counter + 1);
	}
	if (i == 2)
		return (1);
	else
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
	int i = 0;

	if (n > 0)
		return (prime_counter(n, i, counter));
	else
		return (0);
}
