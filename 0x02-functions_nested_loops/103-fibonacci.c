#include <stdio.h>
/**
 * main - starts the excution
 * Return: 0 as default
 */
int main(void)
{
	int a, b, c, i, sum, final;

	sum = 0;
	a = 1;
	b = 2;
	final = 2;
	for (i = 0; sum < 4000000; i++)
	{
		c = a + b;
		sum = sum + a;
		if (c % 2 == 0)
		{
			final = final + c;
		}
		a = b;
		b = c;
	}
	printf("\n%d", final);
	return (0);
}
