#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node - adds new node @start of list
 * @head: double pointer to first node address
 * @str: new string (elements)
 *
 * Return: New address
 * or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *neu_node = malloc(sizeof(list_t));
	unsigned int ct = 0;

	while (str[ct])
		ct++;

	if (!neu_node)
		return (NULL);

	neu_node->str = strdup(str);
	neu_node->len = ct;

	neu_node->next = *head;
	*head = neu_node;

	return (*head);
}
