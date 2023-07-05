#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * sum_listint - returns the sum of all the data(n) of a listint_t
 * @head: double pointer to first node address
 *
 * Return: sum of all the data(n)
 * or 0 if list's empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temphead = head;
	int summation;

	while (temphead)
	{
		temphead = temphead->next;
		summation += temphead->n;
	}

	return (summation);
}
