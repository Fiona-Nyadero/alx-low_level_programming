#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - frees the dog structure
 * @d: dog structure
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
