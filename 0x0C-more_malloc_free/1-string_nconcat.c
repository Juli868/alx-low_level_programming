#include "main.h"
#include <stdio.h>
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
	unsigned int l1, l2, i, count;
	char *out;

	l1 = 0;
	l2 = 0;
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (l1 == 0 || l2 == 0 || s1 == NULL || s2 == NULL)
		return (NULL);
	else
	{
		if (l2 <= n)
			n = l2;
		count = l1 + n;
		out = malloc(count);
		for (i = 0; i < count; i++)
		{
			if (i < l1)
			{
				out[i] = s1[i];
			}
			else
			{
				out[i] = s2[i - l1];
			}
		}
	}
	return (out);
}
