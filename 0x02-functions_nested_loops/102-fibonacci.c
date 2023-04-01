#include <stdio.h>
/**
 * main - starts the excution process
 * Return: 0 as default
 */
int main(void)
{
	int i, a, b, c;

	a = 1;
	b = 2;
	printf("%d, %d, ", a, b);
	for (i = 0; i < 49; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
