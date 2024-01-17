#include "search_algos.h"

/**
 * jump_search - fx jump-searches for a value in a sorted array
 * @array: points to the first element in the array
 * @size: size of the array to search
 * @value: what to search for
 *
 * Return: first index of value
 * OR -1 if array == NULL, or !value
 */

int jump_search(int *array, size_t size, int value)
{
	int j_stp;
	size_t lw, hg, c;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	j_stp = (int)sqrt(size);
	lw = 0;
	hg = j_stp;

	printf("Value checked array[%lu] = [%d]\n", lw, array[lw]);

	while (hg < size && array[hg] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", hg, array[hg]);
		lw = hg;
		hg += j_stp;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", lw, hg);


	for (c = lw; c < size && c < hg; c++)
	{
		printf("Value checked array[%lu] = [%d]\n", c, array[c]);

		if (array[c] == value)
		{
			return (c);
		}
	}
	return (-1);
}
