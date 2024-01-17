#include "search_algos.h"

/**
 * interpolation_search - fx interpl-searches for a value in a sorted array
 * @array: points to the first element in the array
 * @size: size of the array to search
 * @value: what to search for
 *
 * Return: first index of value
 * OR -1 if array == NULL, or !value
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t lw = 0;
	size_t hg = size - 1;
	size_t probe_pos;

	if (array == NULL || size == 0)
		return (-1);

	while (lw <= hg && value >= array[lw] && value <= array[hg])
	{
		probe_pos = lw + (((double)(hg - lw) / (array[hg] - array[lw]))
				* (value - array[lw]));

		if (probe_pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", hg);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", probe_pos, array[probe_pos]);

		if (array[probe_pos] == value)
		{
			return (probe_pos);
		}

		if (array[probe_pos] > value)
		{
			hg = probe_pos - 1;
		}

		else
		{
			lw = probe_pos + 1;

		}
	}

	printf("Value checked array[%lu] is out of range\n", hg);
	return (-1);

}
