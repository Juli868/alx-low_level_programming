#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *Return: the true value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i > j)
	{
		i = -1 * i;
		return (i);
	}
	else if (j > i)
	{
		return (j);
	}
	else
		return (0);
}
