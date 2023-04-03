#include "main.h"

/**
 *_strspn- find the srring in a string
 *@s: string bto look from
 *@accept: string to look for
 *Return: returning its location
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;
	int j, k;

	j = 0;
	while (s[j])
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[j] == accept[k])
			{
				r++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (r);
		}
		j++;
	}
	return (r);
}
