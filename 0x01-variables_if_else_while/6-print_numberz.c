#include <stdio.h>
/**
* main- starts the excutiion
* Return: ends excution
*/
int main(void)
{
	char a[10] = "0123456789";
	int i = 0;

	while (i < 10)
	{
		putchar(a[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
