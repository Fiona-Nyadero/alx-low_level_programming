#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all elements of list_t
 * @h: pointer to list_t
 *
 * Return: No. of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("(nil)\n");

		else
			printf("%s\n", h->str);

		h = h->next;

		x++;
	}

	return (x);
}
