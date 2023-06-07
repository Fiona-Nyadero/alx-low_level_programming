#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a new duplicate string
 * @str: string to duplicate
 *
 * Return: NULL if str is NULL
 * else a pointer to new string
 * or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	int x = 0;
	int y = 1;
	char *mem;

	if (str == NULL)
		return (NULL);

	while (str[y])
		y++;

	mem = malloc((sizeof(char) * y) + 1);

	if (mem == NULL)
		return (NULL);

	while (x < y)
	{
		mem[x] = str[x];
		x++;
	}

	mem[x] = '\0';

	return (mem);
}


