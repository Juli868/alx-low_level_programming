#include "main.h"
int _putchar(char c)
{
	return(write(1, &c, 1));
}
/**
 * read_textfile - prints on the console the contents of a file
 * @filename: name of the file
 * @letters: number of the letters in a file
 * Return: the number of read letters.
 */
size_t read_textfile(const char *filename, size_t letters)
{
	FILE *reading;
	size_t printed, counter = 0;
	char *copy;

	copy = malloc(letters);
	printed = 0;
	reading = fopen(filename, "r");
	if (reading == NULL || filename == NULL)
		return (0);
	while (fgets(copy, letters,reading))
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
	_putchar('\n');
	fclose(reading);
	return (printed);
}
