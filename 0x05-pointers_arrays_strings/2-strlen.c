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
