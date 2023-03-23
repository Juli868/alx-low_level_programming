#include "main.h"
/**
*positive_or_negative- number is positive or negative
*@i: the number to be checked
*/
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is a negative number\n", i);
	}
	else if (i > 0)
	{
		printf("%d is a positive number\n", i);
	}
	else
		printf("%d is Zero\n", i);
}
