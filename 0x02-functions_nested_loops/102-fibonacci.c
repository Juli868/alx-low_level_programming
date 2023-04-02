#include <stdio.h>
/**
 * main - starts the excution process
 * Return: 0 as default
 */
int main(void)
{
	int i;
	long a, b, c;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
