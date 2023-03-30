#include "main.h"
/**
 *
 *
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;
	while (dest[i])
	{
		i++ ;
	}
	while (j < n)
	{
		dest[i] = src[j] ;
		i++;
		j++;
	}
	return (dest);
}
