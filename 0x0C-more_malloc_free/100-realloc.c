#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates memory blocks
 * @ptr: pointer to previous mem
 * @old_size: old ptr byte size
 * @new_size: new byte size
 *
 * Return: new_ptr
 * or ptr if both sizes are equal
 * else NULL if newsize is 0
 * or ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *xptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		xptr = malloc(new_size);

		if (xptr == NULL)
			return (NULL);

		return (xptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	xptr = malloc(new_size);

	if (xptr == NULL)
		return (NULL);

	for (x = 0; x < old_size && x < new_size; x++)
	{
		xptr[x] = ((char *) ptr)[x];
	}

	free(ptr);
	return (xptr);
}

