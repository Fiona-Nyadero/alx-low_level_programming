#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_nodeint_end - adds new node @end of list
 * @head: double pointer to first node address
 * @n: elements of listint_t
 *
 * Return: Address of new element
 * or NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neu_node = malloc(sizeof(listint_t));
	listint_t *oldtail = *head;

	if (!neu_node)
		return (NULL);

	neu_node->n = n;

	neu_node->next = NULL;

	if (*head == NULL)
	{
		*head = neu_node;
		return (neu_node);
	}

	while (oldtail->next)
		oldtail = oldtail->next;
	oldtail->next = neu_node;

	return (neu_node);
}
