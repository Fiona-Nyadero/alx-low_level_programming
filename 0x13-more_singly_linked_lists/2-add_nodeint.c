#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_nodeint - adds new node @start of listint_t list
 * @head: double pointer to first node address
 * @n: elements
 *
 * Return: Address of new element
 * or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neu_node = malloc(sizeof(listint_t));

	if (!neu_node)
		return (NULL);

	neu_node->n = n;

	neu_node->next = *head;
	*head = neu_node;

	return (neu_node);
}
