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
	ssize_t counter;
	size_t temp;
	char *copy;

	copy = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	temp = read(file, copy, letters);
	counter = write(STDOUT_FILENO, copy, temp);
	if (counter == -1)
		return (0);
	free(copy);
	close(file);
	return (counter);
}
