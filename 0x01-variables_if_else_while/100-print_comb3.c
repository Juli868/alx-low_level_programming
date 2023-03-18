#include <stdio.h>
/**
*main - start te \\he program
*Return: Ends the compilation
*/
int main(void)
{
	int i = 0, j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			putchar(i);
			if (j != i)
				putchar(j);
			j++;
		}
		if (i < 10)
			putchar(',');
		}
	return (0);
}
