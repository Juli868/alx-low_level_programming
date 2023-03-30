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

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
