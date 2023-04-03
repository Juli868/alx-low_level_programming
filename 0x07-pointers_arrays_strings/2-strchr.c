#include "main.h"
#include <stdio.h>
/**
 *_strchr - returns the values of string after a character
 *@s: the string to check
 *@c: charater to look for
 *Return: the value to show
 */
char *_strchr(char *s, char c)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}
	return (NULL);
}
