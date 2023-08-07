#include "main.h"
/**
 *_strlen - will calculate the length of the string
 *@s: the pointer to the string to be calculated
 *Return: the value of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * create_file - creates afile with permission of read and write
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if created else -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, length;
	ssize_t counter;

	file = open(filename, O_CREAT|O_RDWR, 0600);
	if (file== -1)
		return (-1);
	length = _strlen(text_content);
	counter = write(file, text_content, length);
	if (counter == -1)
		return (-1);
	return (1);
}
