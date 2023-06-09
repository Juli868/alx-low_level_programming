#include "main.h"
/**
 *_strcat - will put together two strings
 *@dest: the first string
 *@src: second string
 *Return: the new combined sting
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	while (src[j])
	{
		dest[i] =  src[j];
		i++;
		j++;
	}
	return (dest);
}
