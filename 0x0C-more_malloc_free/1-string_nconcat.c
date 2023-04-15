#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to copy from s2
 *
 * Return: pointer to new mem space
 * or NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, z = 0, ct = 0;
	char *mem;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[y])
		y++;

	if (n >= y)
		ct = x + y;
	else
		ct = x + n;

	mem = malloc(sizeof(char) * ct + 1);

	if (mem == NULL)
		return (NULL);

	y = 0;
	while (z < ct)
	{
		if (z <= x)
			mem[z] = s1[z];

		if (z >= x)
		{
			mem[z] = s2[y];
			y++;
		}
		z++;
	}
	mem[z] = '\0';
	return (mem);
}

