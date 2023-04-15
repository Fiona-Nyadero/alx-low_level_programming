#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array elements
 * @size: byte size of elements
 *
 * Return: pointer to mem loc
 * or NULL if malloc fail
 * or NULL if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, ct = 0;
	char *y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ct = nmemb * size;
	y = malloc(ct);

	if (y == NULL)
		return (NULL);

	while (x < ct)
	{
		y[x] = 0;
		x++;
	}

	return (y);
}

