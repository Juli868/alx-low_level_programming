#include "main.h"
/**
 *_memcpy - copies n elements of src to dest
 *@dest: string to have the elements
 *@src: string to get values from
 *@n: number of elements to change
 *Return: the new value of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
