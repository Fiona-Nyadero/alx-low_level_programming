#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: count argument
 * @av: vector argument
 *
 * Return: pointer to the new string
 * or NULL if fails
 * else NULL if ac is 0
 * or av is NULL
 */

char *argstostr(int ac, char **av)
{
	int x = 0, y = 0, z = 0, c = 0;
	char *mem;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		while (av[x][y])
		{
			c++;
			y++;
		}
		y = 0;
		x++;
	}

	mem = malloc((sizeof(char) * c) + ac + 1);

	x = 0;
	while (av[x])
	{
		while (av[x][y])
		{
			mem[z] = av[x][y];
			z++;
			y++;
		}

		mem[z] = '\n';

		y = 0;
		z++;
		x++;
	}

	z++;
	mem[z] = '\0';
	return (mem);
}


