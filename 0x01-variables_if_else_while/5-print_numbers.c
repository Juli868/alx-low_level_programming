#include <stdio.h>
/**
* main - starts the program
* Retun: ends the excution
*/
int main(void)
{
	char num[10] = "0123456789";
	int i = 0;

	while (i < 10)
	{
		putchar(num[i]);
		i++;
	}
	return (0);
