 #include "main.h"
/**
 *print_alphabet_x10 - prints the alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i < 11; i++)
	{
		for (j = 97; j < 123 ; j++)
		{
		_putchar("%c",j);
		}
		_putchar('\n');
	}
}
