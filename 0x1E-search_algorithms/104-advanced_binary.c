#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using
 * advanced binary search which returns the first array value
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not present
 * or if array == NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (a_binary_recursive(array, 0, size - 1, value));
}

/**
 * a_binary_recursive - Searches for a value using bin search
 * recursively
 *
 * @array: Pointer to the first element of the array to search in
 * @links: lower bounds of the array
 * @rechts: upper bounds of the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not present
 * or if array == NULL
 */
int a_binary_recursive(int *array, size_t links, size_t rechts, int value)
{
	size_t m, s;

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
		{
			if (m == links || array[m - 1] != value)
				return (m);
			else
				return (a_binary_recursive(array, links, m - 1, value));
		}

		else if (array[m] < value)
			return (a_binary_recursive(array, m + 1, rechts, value));

		else
			return (a_binary_recursive(array, links, m, value));
	}

	return (-1);
}
