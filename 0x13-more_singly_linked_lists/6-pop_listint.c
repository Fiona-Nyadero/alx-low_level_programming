#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: double pointer to first node address
 *
 * Return: old head node's data
 * or 0 if list's empty
 */

int pop_listint(listint_t **head)
{
	listint_t *newhead;
	int elements;

	if (!head || !*head)
		return (0);

	elements = (*head)->n;
	newhead = (*head)->next;
	free(*head);
	*head = newhead;

	return (elements);
}
