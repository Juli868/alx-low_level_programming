#include <stdio.h>
/**
* main- starts the excution
* Return: ends the program
*/
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
		putchar(',');
		putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
