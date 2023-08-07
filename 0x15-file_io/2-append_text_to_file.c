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
	{
		i++;
	}
	return (i);
}

/**
 * append_text_to_file - adds content to an already existing file
 * @filename: name of the file
 * @text_content: what to add to the file
 * Return: 1 on successs else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, length;
	ssize_t checker;

	file = open(filename, O_APPEND|O_WRONLY);
	if (file == -1)
		return (-1);
	length = _strlen(text_content);
	checker = write(file, text_content, length);
	if (checker == -1)
		return(-1);
	return (1);
}
