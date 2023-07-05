#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees elements of listint_t
 * @head: pointer to listint_t
 *
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	listint_t *newhead;

	while (head)
	{
		newhead = head->next;
		free(head);
		head = newhead;
	}
}
