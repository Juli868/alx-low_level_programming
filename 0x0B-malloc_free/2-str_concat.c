#include "main.h"
/**
 *str_concat - adds two string together
 *@s1: first string
 *@s2:second string
 *Return: new string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, counters1, counters2;
	char *new_string;

	i =0;
       	counters1 = 0;
	counters2 = 0;
	while (s1[counters1])
		counters1++;
	while (s2[counters2])
		counters2++;
	new_string = malloc(sizeof(char) * (counters1 + counters2 + 1));
	if (new_string == NULL)
		return (NULL);
	while (i < counters1)
	{
		new_string[i] = s1[i];
		i++;
	}
	counters1 = 0;
	while(counters1 < counters2)
	{
		new_string[i] = s2[counters1];
		i++;
		counters1++;
	}
	new_string[1 + counters1 + counters2] = '\0';
	return (new_string);
	free(new_string);
}
