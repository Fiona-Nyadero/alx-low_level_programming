#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to an array
 * @nmemb: array elements
 * @size: byte size of elements
 *
 * Return: pointer to new memory local set to 0
 * or NULL if malloc fail
 * or NULL if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int g = 0, cnt = 0;
	char *h;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cnt = nmemb * size;
	h = malloc(cnt);

	if (h == NULL)
		return (NULL);

	while (g < cnt)
	{
		h[g] = 0;
		g++;
	}

	return (h);
}
