#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns no. of elements of listint_t
 * @h: pointer to listint_t
 *
 * Return: No. of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
