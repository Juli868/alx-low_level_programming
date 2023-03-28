#include "main.h"

/**
*rev_string - will save a reverse form of a string
*@s: string to be reversed
*/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char new_string;

	while (s[i])
	{
		i++;
	}
	i--;
	while (j <= i)
	{
		new_string = s[j];
		s[j] = s[i];
		s[i] = new_string;
		i--;
		j++;
	}
}

