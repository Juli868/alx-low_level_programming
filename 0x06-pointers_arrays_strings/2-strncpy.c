#include "main.h"
/**
 *_strncpy - copys the second string to the first
 *@dest: first string
 *@src: second string
 *@n: number of items to copy
 *Return: the concantinated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		j++;
	}
	if (j < i)
	{
		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
