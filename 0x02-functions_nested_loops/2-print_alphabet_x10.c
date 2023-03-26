#include "main.h"
#include <stdio.h>

/**
 *print_alphabet_x10 - prints the alphabets 10 times
 */
void print_alphabet_x10(void)
{
	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 1; j < 26 ; j++)
		{
		_putchar(c[j]);
		}
		_putchar('\n');
	}
}
