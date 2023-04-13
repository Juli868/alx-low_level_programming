#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - adds two strings
 *@s1: first string
 *@s2: second string
 *@n: number of characters to add to
 *Return: the concantinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, d;
	char *p;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	p = malloc(sizeof(char) * (i + n + 1));
	while (j < i)
	{
		p[j] = s1[j];
		j++;
	}
	d = 0;
	while (j < n)
	{
		p[j] = s2[d];
		j++;
		d++;
	}
	return (p);
}
