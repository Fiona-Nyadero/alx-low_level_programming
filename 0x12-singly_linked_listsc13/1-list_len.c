#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns no. of elements of list_t
 * @h: pointer to list_t
 *
 * Return: No. of elements
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
