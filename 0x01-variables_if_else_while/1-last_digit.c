#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 *main - starting the program
 * Return: ending it
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2
	if ((n%10) > 5)
		printf("Last digit of %d is %d and is greater than 5 \n", n, n%10);
	else if (last_digit == 0)
		printf("Last digit of %d is  and is 0\n", a);
	else
		printf("the last digit of %d is %d and is less than 6 and not 0", n);
	return (0);
}
