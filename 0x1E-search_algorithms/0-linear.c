#include "search_algos.h"

/**
 * linear_search - Fx linear searches for a value in an array
 * @array: points to the first element of the array to search
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index of value, or -1 if not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t s;

	if (array == NULL)
		return (-1);

	for (s = 0; s < size; s++)
	{
		printf("Value checked array[%lu] = [%d]\n", s, array[s]);

		if (array[s] == value)

			return (s);
	}

	return (-1);
}
