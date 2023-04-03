#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i, left, right;

	left = 0;
	right = 0;
	size --;
	for (i = 0; i <= size; i++)
	{
		left = left + a[i*size +i];
	}
	for (i = 0; i <= size; i++)
	{
		right = right + a[i*size+i];
		size--;
	}
	printf("%d , %d\n", left, right);
}
