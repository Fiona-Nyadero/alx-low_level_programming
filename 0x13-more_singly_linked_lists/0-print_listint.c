#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to listint_t
 *
 * Return: No. of nodes in listint_t
 */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;

		elements++;
	}

	return (elements);
}
