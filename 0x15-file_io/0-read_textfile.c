#include "main.h"
/**
 * read_textfile - prints on the console the contents of a file
 * @filename: name of the file
 * @letters: number of the letters in a file
 * Return: the number of read letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int reading;
	size_t printed, counter = 0;
	char *copy;

	copy = malloc(letters);
	printed = 0;
	reading = open(filename, O_RDONLY);
	if (reading == -1 || filename == NULL)
		return (0);
	while (read(reading, copy, letters))
	{
		while (copy[counter])
		{
			_putchar(copy[counter]);
			counter++;
			printed++;
			if (printed >= letters)
				return (printed);
		}
		counter = 0;
	}
	close(reading);
	return (printed);
}
