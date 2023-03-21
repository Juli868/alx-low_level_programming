#include <stdio.h>
/**
* alphabet - will print all alphabets in small letters
*/
void alphabet(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
}
/**
* main - start the excution
* Return: ends the excution
*/
int main(void)
{
	alphabet();
		return (0);
}
