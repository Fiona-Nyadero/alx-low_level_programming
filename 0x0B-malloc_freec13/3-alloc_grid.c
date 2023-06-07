#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2D array
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL if fx fails
 * or width or height is 0 or -ve
 * else return array pointer
 */

int **alloc_grid(int width, int height)
{
	int x, y, z, a;
	int **mem;

	if (width <= 0 || height <= 0)
		return (NULL);

	mem = malloc(sizeof(int *) * height);

	if (mem == NULL)
	{
		free(mem);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		mem[x] = malloc(sizeof(int) * width);

		if (mem[x] == NULL)
		{
			for (y = x; y >= 0; y--)
			{
				free(mem[y]);
			}

			free(mem);
			return (NULL);
		}
	}

	for (z = 0; z < height; z++)
	{
		for (a = 0; a < width; a++)
		{
			mem[z][a] = 0;
		}
	}

	return (mem);
}


