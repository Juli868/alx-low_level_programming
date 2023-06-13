#include "main.h"
/**
 * alloc_grid - willallocate memory for two dimensional array
 * @width: with of the array
 * @height: length of the array
 * Return: newly allocated memory
 */
int **alloc_grid(int width, int height)
{
	int counter_h, counter_w;
	int **grid;

	counter_h = 0;
	counter_w = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int) * (height * width));
	while (counter_h < height)
	{
		while (counter_w < width)
			grid[counter_h][counter_w] = 0;
		counter_w = 0;
	}
	return (grid);
}
