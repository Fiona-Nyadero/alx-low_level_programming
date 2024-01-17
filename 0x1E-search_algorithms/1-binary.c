#include "search_algos.h"

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
