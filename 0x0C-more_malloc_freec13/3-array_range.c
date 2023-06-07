#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: lower limit
 * @max: upper limit
 *
 * Return: pointer to array
 * or NULL if malloc fail
 * or NULL if min > max
 */

int *array_range(int min, int max)
{
	int *ar, x = 0;

	if (min > max)
		return (NULL);

	ar = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (ar == NULL)
		return (NULL);

	while (min <= max)
	{
		ar[x] = min;
		x++;
		min++;
	}

	return (ar);
}

