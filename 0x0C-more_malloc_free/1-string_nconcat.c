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
	unsigned int l1, l2, count, sum;
	char *out;

	l1 = 0;
	l2 = 0;
	count = 0;
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	l1--;
	if (l2 <= 1 || l1 <= 1)
	{
		return (NULL);
		exit(0);
	}
	if (n > l2)
	{
		n = l2;
	}
	sum = l1 +n ;
	out = malloc(sum);
	while (out[count])
	{
		if (count < l1)
			out[count] = s1[count];
		else
		{
			out[count] = s2[count - l1];
		}
		count++;
	}
	return (out);
}
