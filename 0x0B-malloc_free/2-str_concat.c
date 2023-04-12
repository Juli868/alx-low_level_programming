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
	int i, j, c, d, e;
	char *p;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	i--;
	while (s2[j])
		j++;
	c = 0;
	p = malloc(sizeof(char) * c);
	d = 0;
	e = 0;
	if (p != NULL)
	{
		while (i >= 0)
		{
			p[i] = s1[i];
			i--;
			d++;
		}
		while (j > 0)
		{
			p[d] = s2[e];
			j--;
			d++;
			e++;
		}
		p[d + 1] = '\0';
		return (p);
	}
	else
		return (NULL);
}
