#include "function_pointers.h"

/**
 * array_iterator - executes a fx as parameter on array
 * @array: pointer to elements(array)
 * @size: size of array
 * @action: pointer to the iteration fx
 *
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
