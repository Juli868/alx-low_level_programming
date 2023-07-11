#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: what to put in file
 * Return: 1 on successelse different number
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
		write(file, text_content, sizeof(text_content));
	close(file);
	return (1);
}
