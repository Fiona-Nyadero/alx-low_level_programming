#include "search_algos.h"

/**
 * jump_list - Searches for value in a sorted singly
 * linked list using jump search
 *
 * @list: Points to the  head of the linked-list
 * @size: Number of nodes in the list
 * @value: The value to search for
 *
 * Return: Pointer to first node of value's location
 * OR NULL if value != head or head == NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t stp, stp_sz;
	listint_t *node, *jumpls;

	if (list == NULL || size == 0)
		return (NULL);

	stp = 0;
	stp_sz = sqrt(size);
	for (node = jumpls = list; jumpls->index + 1 < size && jumpls->n < value;)
	{
		node = jumpls;
		for (stp += stp_sz; jumpls->index < stp; jumpls = jumpls->next)
		{
			if (jumpls->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jumpls->index, jumpls->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jumpls->index);

	for (; node->index < jumpls->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
