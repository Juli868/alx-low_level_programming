#include <unistd.h>
/**
 * main - prints a quote to the standard error
 * Return: 1 as defaut
 */
int main(void)
{
	char string[59] = {"and that piece of art is useful\" - Dora Korpar,"
"2015-10-19\n"};

	write(2, string, 59);
	return (1);
}
