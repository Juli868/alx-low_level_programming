#include "main.h"
/**
 *
 *
 *
 */
int _strlen_recursion(char *s)
{
	int counter;

	counter = 0;
	if (*s)
	{
		counter ++;
		_strlen_recursion
