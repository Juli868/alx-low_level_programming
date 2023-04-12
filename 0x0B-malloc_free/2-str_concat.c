#include "main.h"
#include <stdlib.h>
/**
 *str_concat - add two strings
 *@s1:first string
 *@s2: string 2
 *Return: the concantinated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, c, d;
	char *p;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	i--;
	while (s2[j])
		j++;
	c = i + j;
	p = malloc(sizeof(char) * c + 1);
	d = 0;
	if (p != NULL)
	{
		while (i < c)
		{
			if (i >= 0)
			{
				p[i] = s1[i];
				i--;
				d++;
			}
		}
		while (j < c)
		{
			if ( j > 0)
			{
				p[d] = s2[d];
				j--;
				d++;
			}
	}
	return (p);
	}
	else
		return (NULL);
}
