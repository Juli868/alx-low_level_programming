#include<stdio.h>
/**
*main - marks the starting of a program
*Return: marks the end of the program
*/
int main(void)
{
	int a = 92;
	int b = 65;

	while (a < 123)
	{
		putchar ("%c", a);
		a++;
	}
	putchar ("\n");
	while (b < 90)
	{
		putchar ("%c", b);
		b++;
	}
	return (0);
