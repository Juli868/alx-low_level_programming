#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - arrocates two dimensional array
 *@width: the lenght of the array
 *@height: the othe part of the array
 *Return: the pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width > 0 || height	> 0)
	{
		p = malloc(sizeof(int *) * width);
		for (i = 0; i < width; i++)
		{
			p[i] = malloc(sizeof(int) * width);
		}
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
			{
				p[i][j] = 0;
			}
		}
		return (p);
		free(p);
	}
	else
	{
		return (NULL);
		free(p);
	}
}
