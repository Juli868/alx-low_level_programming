#include "main.h"

/**
 *_memset - will set the n number of array to b
 *@s: the array to change its elements
 *@b: the character to set
 *@n: the number of elements
 *Return: the changes array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
