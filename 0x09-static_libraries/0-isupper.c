#include "main.h"
/**
 *_isupper- will check if the character is upper or lower
 *@c: is the one to be checked
 *Return: 0 when lower or 1 when upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
