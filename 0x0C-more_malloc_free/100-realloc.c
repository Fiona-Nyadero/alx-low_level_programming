#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates memory blocks using malloc n' free
 * @ptr: pointer to previous memory block alloc
 * @old_size: old ptr byte size
 * @new_size: new byte size of new memory block
 *
 * Return: new_ptr
 * or ptr if both sizes are equal
 * else NULL if newsize is 0
 * or ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (n = 0; n < old_size && n < new_size; n++)
	{
		nptr[n] = ((char *) ptr)[n];
	}

	free(ptr);
	return (nptr);
}
