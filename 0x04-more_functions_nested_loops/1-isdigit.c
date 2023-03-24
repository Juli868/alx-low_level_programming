#include "main.h"
/**
 *_isdigit - will determine if the character is a digit
 *@c: the character to check
 *Return: 0 if not a digit and 1 if it is
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
