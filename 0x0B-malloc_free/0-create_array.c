#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: specific character to init the array
 *
 * Return: NULL if size is 0
 * else pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *mem;

	if (size == 0)
		return (NULL);

	mem = malloc(sizeof(char) * size);
	
	if (mem == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		mem[x] = c;

	}

	return (mem);
}


