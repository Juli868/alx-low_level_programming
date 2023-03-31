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
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[i];
	}
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
