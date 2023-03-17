#include<stdio.h>
/**
*main - starts the excution
*Return: ends the excution
*/
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 25;

	while (i >= 0)
	{
		putchar(alpha[i]);
		i--;
	}
	return(0);
}
