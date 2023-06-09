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
	duplicate = malloc(sizeof(char) * counter + 1);
	if (str == NULL || duplicate == 0)
	{
		printf("failed to allocate memory");
		return (NULL);
	}
	while (i < counter)
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[counter] = '\0';
	return (duplicate);
	free(duplicate);
}
