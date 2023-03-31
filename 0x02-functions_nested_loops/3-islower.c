#include "main.h"
/**
 *_islower - checks if the provided character is a lower case alphabet
 *@c: character to be checked
 *Return: returns 1 if its lower or 0 if not
 */
int _islower(int c)
{
	char alpha[26] = "abcdefghijlmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (c == alpha[i])
		{
			return (1);
		}
		else
			return (0);
	}
}
