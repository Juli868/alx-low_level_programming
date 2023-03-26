#include "main.h"
/**
* alphabet - will print all alphabets in small letters
*/
void print_alphabet(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i < 26; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
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
