#include "main.h"
/**
 * alloc_grid - willallocate memory for two dimensional array
 * @width: with of the array
 * @height: length of the array
 * Return: newly allocated memory
 */
int **alloc_grid(int width, int height)
{
	int counter_h, counter_w, counter;
	int **grid;

	counter_h = 0;
	counter_w = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int*) * height);
	for (counter = 0; counter < height; counter++)
		grid[counter] = malloc(sizeof(int) * width);
	while (counter_h < height)
	{
		while (counter_w < width)
		{
			grid[counter_h][counter_w] = 0;
			counter_w++;
		}
		counter_w = 0;
		counter_h++;
	}
	return (grid);
	free(grid);
}
