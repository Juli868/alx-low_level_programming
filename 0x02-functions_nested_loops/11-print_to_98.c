#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints all natural number until it reaches 98
 *@n: the starting number of printing
 */
void print_to_98(int n)
{
	int i;

	i = n;
	printf("%d", i);
	if (i < 98)
	{
		while (i < 98)
		{
			i++;
			printf(",%d ", i);
		}
	}
	else if (i > 98)
	{
		while (i > 98)
		{
			i--;
			printf(",%d ", i);
		}
	}
		printf("\n");
}
