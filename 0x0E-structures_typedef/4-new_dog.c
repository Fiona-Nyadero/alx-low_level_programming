#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog
 *
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: 0 or NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ct_dog;
	int name_n = 0, own_n = 0;

	if (name != NULL && owner != NULL)
	{
		name_n = _strlen(name) + 1;
		own_n = _strlen(owner) + 1;
		ct_dog = malloc(sizeof(dog_t));

		if (ct_dog == NULL)
			return (NULL);

		ct_dog->name = malloc(sizeof(char) * name_n);

		if (ct_dog->name == NULL)
		{
			free(ct_dog);
			return (NULL);
		}

		ct_dog->owner = malloc(sizeof(char) * own_n);

		if (ct_dog->owner == NULL)
		{
			free(ct_dog->name);
			free(ct_dog);
			return (NULL);
		}

		ct_dog->name = _strcpy(ct_dog->name, name);
		ct_dog->owner = _strcpy(ct_dog->owner, owner);
		ct_dog->age = age;
	}
	return (ct_dog);
}

/**
 * _strlen - Gets length of string
 * @s: string to count
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int y = 0;

	for (; *s != '\0'; s++)
	{
		y++;
	}

	return (y);
}

/**
 * _strcpy - Copies a string
 * @dest: Destination
 * @src: Source string
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	dest[x++] = '\0';

	return (dest);
}
