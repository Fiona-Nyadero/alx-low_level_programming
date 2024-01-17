#include "search_algos.h"

/**
 * exponential_search - fx exp-searches for a value in a sorted array
 * @array: points to the first element in the array
 * @size: size of the array to search
 * @value: what to search for
 *
 * Return: first index of value
 * OR -1 if array == NULL, or !value
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t sub_arr, lw, hg, new_size;
	int result;

	if (array == NULL || size == 0)
		return (-1);

	sub_arr = 1;

	while (sub_arr < size && array[sub_arr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", sub_arr, array[sub_arr]);
		sub_arr *= 2;
	}

	lw = sub_arr / 2;
	hg = (sub_arr < size ? sub_arr : size - 1);

	printf("Value found between indexes [%lu] and [%lu]\n", lw, hg);

	new_size = hg - lw;

	result = binary_search(array + lw, new_size, value);

	if (result == -1)
		return (-1);

	return (result + lw);
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t links;
	size_t rechts, m, s;

	if (array == NULL)
		return (-1);

	links = 0;
	rechts = size - 1;

	while (links <= rechts)
	{
		m = (links + rechts) / 2;

		printf("Searching in array: ");

		for (s = links; s <= rechts; s++)
		{
			printf("%d", array[s]);

			if (s < rechts)
				printf(", ");
		}
		printf("\n");

		if (array[m] == value)

			return (m);

		if (array[m] < value)
			links = m + 1;
		else
			rechts = m - 1;
	}

	return (-1);
}
