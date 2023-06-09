#include "main.h"
#include <stdio.h>
/**
*_strpbrk - looks a string in another string and prints it
*@s: the string to look from
*@accept: the string to look for
*Return: the the part after founding the string or null
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}
		i++;
		s++;
	}
	return (NULL);
}
