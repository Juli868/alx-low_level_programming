#include <stdio.h>
/**
* main- starts excution
* Return: ends program
*/
int main(void)
{
	char hex[16] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(hex[i]);
		i++;
	}
	putchar('\n');
		return (0);
}
