#include "main.h"
/**
 *_isalpha - checks if a given character is an alphabet
 *@c: char to check
 *Return: 1 if true or else 0
*/
int _isalpha(int c)
{
	char alpha[52] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
		'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i;

	for (i = 0; i < 52; i++)
	{
		if (c == alpha[i])
		{
			return (1);
		}
	}
	return (0);
}
