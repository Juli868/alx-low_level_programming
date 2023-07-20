#include "main.h"
/**
 * main - copies element of oe file to another
 * @args: number of arguments given at run time
 * @argv: arguments given
 */
int main(int args, char **argv)
{
	int fl_1, fl_2, counter;
	char copy[1024];

	if (args != 3)
	{
		write(3, "Usage: cp file_from file_to", 1024);
		exit(97);
	}
	fl_1 = open(argv[1], O_RDONLY);
	fl_2 = open(argv[2], O_RDWR | O_CREAT);
	if (fl_1 == -1)
	{
		write(3, &argv[1], 1024);
		exit(98);
	}
	if (fl_2 == -1)
	{
		write(3, argv[2],1024);
		exit(99);
	}
	while (read(fl_1, copy, 2500))
	{
		for (counter = 0; copy[counter]; counter++)
		{
			write(fl_2, &copy[counter], sizeof(copy[counter]));
		}
	}
	return (1);
}
