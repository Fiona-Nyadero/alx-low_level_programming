#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: double pointer to first node address
 * @index: postion of nth node (starts @0)
 *
 * Return: pointer to node n
 * or NULL if node n is nonexistent
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temphead = head;
	unsigned int position = 0;

	while (temphead && position < index)
	{
		temphead = temphead->next;
		position++;
	}

	return (temphead ? temphead : NULL);
}
