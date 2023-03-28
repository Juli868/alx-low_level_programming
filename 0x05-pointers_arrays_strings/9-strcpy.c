#include "main.h"
/**
 *_strcpy - will copy the elements of a string to another
 * @src: first string
 *@dest: second string
 *Return: prints the swaped value
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	
	while (src[i])
		{
			i++;
		}
	for (j = 0; j <= i ; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
