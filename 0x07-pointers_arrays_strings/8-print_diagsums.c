#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints the diagonal sum of a perfect square
 *@a: oiunter to the array to consider
 *@size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j, left, right;

	left = 0;
	right = 0;
	size--;
	for (i = 0; i <= size; i++)
	{
		for (j = 0; i <= size; j++)
		{
			if (i == j)
			{
				left = left + a[i * j];
			}
		}
	}
	for (i = 0; i <= size; i++)
	{right = right + a[i * size];
		size--;
	}
	printf("%d , %d\n", left, right);
}
