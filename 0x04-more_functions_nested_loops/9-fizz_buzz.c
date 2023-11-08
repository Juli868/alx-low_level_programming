#include "main.h"
#include <stdio.h>
/**
 * main - prints from 1 to 100, but multioles of 3 with Fizz multiples of
 * 5 with buzz for both FizzBuzz
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
