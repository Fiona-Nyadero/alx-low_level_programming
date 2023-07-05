#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to first node address
 * @idx: postion where the new node is added(starts @0)
 * @n: value of new node
 *
 * Return: pointer to new node
 * or NULL if fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *neu_node;
	listint_t *temphead = *head;
	unsigned int position;

	neu_node = malloc(sizeof(listint_t));
	if (!neu_node || !head)
		return (NULL);

	neu_node->n = n;
	neu_node->next = NULL;

	if (idx == 0)
	{
		neu_node->next = *head;
		*head = neu_node;
		return (neu_node);
	}

	for (position = 0; temphead && position < idx; position++)
	{
		if (position == idx - 1)
		{
			neu_node->next = temphead->next;
			temphead->next = neu_node;
			return (neu_node);
		}
		else
			temphead = temphead->next;
	}

	return (NULL);
}
