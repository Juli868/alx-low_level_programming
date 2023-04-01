#include <stdio.h>
/**
 *main - starts the excution
 *Return: 0 as default
 */
int main(void)
{
	int i;
	long long int a, b, c;

	a = 1;
	b = 2;
	printf("%lld, %lld, ", a, b);
	for (i = 1; i < 97; i++)
	{
		c = a + b;
		printf("%lld, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

