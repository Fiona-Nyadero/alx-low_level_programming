#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up memory of a 2D array/grid
 * @grid: 2D array
 * @height: height of given grid/array
 *
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}

	free(grid);

	/*return 0;*/
}
