#include "main.h"
/**
 * read_textfile - reads and prints the content of a file to standard out
 * @filename: name of the file
 * @letters: number of letters in the file
 * Return: number of printed chartacters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t counter, temp;
	char *copy;

	copy = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY<<1);
	if (file == -1)
		return (0);
	read(file, copy, letters);
	counter = write(1, copy, letters);
	temp = letters;
	if (counter != temp)
		return (0);
	return (counter);
}
