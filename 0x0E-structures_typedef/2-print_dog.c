#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the dog structure(data)
 * @d: pointer to dog structure
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
