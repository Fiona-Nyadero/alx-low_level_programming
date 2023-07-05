#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 if Success or -1 if Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temphead = *head;
	listint_t *neu_node = NULL;
	unsigned int position = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temphead);
		return (1);
	}

	while (position < index - 1)
	{
		if (!temphead || !(temphead->next))
			return (-1);
		temphead = temphead->next;
		position++;
	}


	neu_node = temphead->next;
	temphead->next = neu_node->next;
	free(neu_node);

	return (1);
}

