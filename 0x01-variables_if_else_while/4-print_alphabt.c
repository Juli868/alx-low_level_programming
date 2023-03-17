#include <stdio.h>
/**
*main - starts the program
*Return: ends the program
*/
int main(void)
{
	char a[24] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (i < 24)
	{
		putchar (a[i]);
		i++;
	}
	putchar ('\n');
	return (0);
}
