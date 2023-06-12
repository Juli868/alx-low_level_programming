#include "main.h"
/**
 *_strdup- will create a duplicate of the string given
 *@str: string to duplicate
 *Return:address of the new string
 */
char *_strdup(char *str)
{
	int i, counter;
	char *duplicate;

	counter = 0;
	i = 0;
	while (str[counter])
		counter++;
	duplicate = malloc(sizeof(char) * counter);
	if (duplicate == NULL)
		return (NULL);
	while (i <= counter)
	{
		duplicate[i] = str[i];
		i++;
	}
	return (duplicate);
	free(duplicate);
}
