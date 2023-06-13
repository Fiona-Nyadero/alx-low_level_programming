#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: specific character to init the array
 *
 * Return: NULL if size is 0
 * else pointer to the array
 * or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int y;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < size; y++)
	{
		arr[y] = c;
	}

	return (arr);
}
