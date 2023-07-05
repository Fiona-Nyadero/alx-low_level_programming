#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees elements of listint_t
 * @head: pointer to listint_t
 *
 * Return: Always 0
 */

void free_listint2(listint_t **head)
{
	listint_t *newhead;

	if (head == NULL)
		return;

	while (head)
	{
		newhead = (*head)->next;
		free(*head);
		*head = newhead;
	}

	*head = NULL;
}
