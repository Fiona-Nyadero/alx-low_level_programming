#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array of elements
 * @size: number of elements in array
 * @cmp: pointer to fx
 *
 * Return: if no int found or size <= 0, return -1
 * else return first integer element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int num = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (num < size)
			{
				if (cmp(array[num]))
					return (num);
				num++;
			}
		}
	}

	return (-1);
}
