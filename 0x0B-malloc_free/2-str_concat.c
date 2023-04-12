#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, a = 0;
	char *mem;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[y])
		y++;

	z = x + y;
	mem = malloc((sizeof(char) * z) + 1);

	if (mem == NULL)
		return (NULL);

	y = 0;

	while (a < z)
	{
		if (a <= x)
			mem[a] = s1[a];
		if (a >= x)
		{
			mem[a] = s2[y];
			y++;
		}
		a++;
	}

	mem[a] = '\0';
	return (mem);
}


