#include "main.h"
/**
 * main - cpies content of a file to another
 * @argc: number f arguments
 * @argv: arguments passed on the start of the program
 * Return: 1 on success else different number is used
 */
int main(int argc, char **argv)
{
	int from, to, counter, size = 1024;
	char *text;

	text = malloc(sizeof(char) * size);
	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 30);
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY, 0664);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(99);
	}
	while (1)
	{
		counter = read(from, text, size);
		if (text[counter] != EOF)
		{
			size *= 2;
			text = realloc(text, sizeof(char) * size);
		}
		break;
	}
	write(to, text, size);
	close(from);
	close(to);
	free(text);
	return (1);
}
