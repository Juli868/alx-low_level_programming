#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 *
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
			return (s + i);
		}
	}
	return (NULL);
}
