#include "main.h"
/**
 *_islower - checks if the provided character is a lower case alphabet
 *@c: character to be checked
 *Return: returns 1 if its lower or 0 if not
 */
int _islower(int c)
{
	char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'l', 'm', 'n', 'o',
		'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i;

	for (i = 0; i < 26; i++)
	{
		if (c == alpha[i] && c != 0)
		{
			return (1);
		}
	}
	return (0);
}
