#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up a 2D array/grid
 * @grid: 2D array
 * @height: height of array
 *
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}


