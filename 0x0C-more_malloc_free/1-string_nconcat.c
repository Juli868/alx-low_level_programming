#include "main.h"
/**
 *string_nconcat - will add two strings
 *@s1: first string
 *@s2: second string
 *@n: number of bits to take
 *Return: address of the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int counter, str1_len, str2_len, total;
	char *new;

	str1_len = 0;
	str2_len = 0;
	if (s1 == NULL)
		str1_len = 0;
	else
	{
		while (s1[str1_len] != '\0')
			str1_len++;
	}
	if (s2 == NULL)
		str2_len = 0;
	else
	{
		while (s2[str2_len] != '\0')
			str2_len++;
	}
	if (str2_len < n)
		n = str2_len;
	total = n + str1_len;
	new = malloc(sizeof(char) * total + 1);
	if (new == NULL)
		return (NULL);
	counter = 0;
	while (counter < str1_len)
	{
		new[counter] = s1[counter];
		counter++;
	}
	str1_len = 0;
	while (counter < total)
	{
		new[counter] = s2[str1_len];
		counter++;
		str1_len++;
	}
	new[total] = '\0';
	return (new);
	free(new);
}
