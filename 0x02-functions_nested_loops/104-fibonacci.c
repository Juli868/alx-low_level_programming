#include <stdio.h>
/**
 *main - starts the excution
 *Return: 0 as default
 */
int main(void)
{
	int i, a, b, c;

	a = 1;
	b = 2;
	printf("%d, %d, ", a, b);
	for (i = 1; i < 99; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	return (0);
}

