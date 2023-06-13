#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D int array
 * @width: with of 2D array/grid
 * @height: height of 2D array/grid
 *
 * Return: NULL if width or height is 0 or -ve
 * else pointer to 2D array/grid
 * or NULL if fx fails
 */

int **alloc_grid(int width, int height)
{
	int y, z, a, b;
	int **memgrid;

	if (width <= 0 || height <= 0)
		return (NULL);

	memgrid = malloc(sizeof(int *) * height);

	if (memgrid == NULL)
	{
		free(memgrid);
		return (NULL);
	}

	for (y = 0; y < height; y++)
	{
		memgrid[y] = malloc(sizeof(int) * width);

		if (memgrid[y] == NULL)
		{
			for (z = y; z >= 0; z--)
			{
				free(memgrid[z]);
			}

			free(memgrid);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			memgrid[a][b] = 0;
		}
	}

	return (memgrid);
}
