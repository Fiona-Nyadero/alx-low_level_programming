#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes the dog structure
 * @d: a pointer to  dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
