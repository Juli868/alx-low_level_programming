#include<stdio.h>
/**
*main - marks the starting of a program
*Return: marks the end of the program
*/
int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	char b[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i,j = 0;

	while (i < 26)
	{
		putchar (a[i]);
		a++;
	}
	while (j < 0)
	{
		putchar (b[j]);
		b++;
	}
	putchar ('\n')
	return (0);
