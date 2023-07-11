#include "main.h"
/**
 * main - copies element of oe file to another
 * @args: number of arguments given at run time
 * @argv: arguments given
 */
int main(int args, char **argv)
{
	int fl_1, fl_2, counter;
	char copy[1024];;

	if (args != 3)
	{
		printf("Usage: cp file_from file_to)\n");
		exit (97);
	}
	fl_1 = open(argv[1], O_RDONLY);
	fl_2 = open(argv[2], O_RDWR | O_CREAT);
	if (fl_1 == -1)
	{
		printf("Error: Can't read from file%s\n", argv[1]);
		exit(98);
	}
	if (fl_2 == -1)
	{
		printf("Error: Can't write to%s\n", argv[2]);
		exit(99);
	}
	while (read(fl_1,copy,1024))
	{
		for(counter = 0; copy[counter];counter++)
		{
			write(fl_2, &copy[counter], sizeof(copy[counter]));
		}
	}
	return (1);
}
