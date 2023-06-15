#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lower limit
 * @max: upper limit
 *
 * Return: pointer to new array
 * or NULL if malloc fail
 * or NULL if min > max
 */

int *array_range(int min, int max)
{
	int *intarr, mn = 0;

	if (min > max)
		return (NULL);

	intarr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (intarr == NULL)
		return (NULL);

	while (min <= max)
	{
		intarr[mn] = min;
		mn++;
		min++;
	}

	return (intarr);
}

