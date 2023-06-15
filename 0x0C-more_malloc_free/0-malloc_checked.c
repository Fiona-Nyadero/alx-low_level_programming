#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: variable string or whatever
 *
 * Return: pointer to new alloctd memory location
 * or 98 if fail
 */

void *malloc_checked(unsigned int b)
{
	void *yz;

	yz = malloc(b);

	if (yz == NULL)
		exit(98);

	return (yz);
}

