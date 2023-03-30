#include "main.h"
/**
 *strncat - will add 2 strings together but with n number of characters
 *@dest: first string
 *@src: the second string
 *@n: number of characters to stop on
 *Return: the concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
