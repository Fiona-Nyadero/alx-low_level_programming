#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats two strings
 * @s1: string A(full)
 * @s2: string B(first n bytes)
 * @n: first number of bytes to copy from s2
 *
 * Return: pointer to new allocated mem local
 * or NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int d = 0, e = 0, f = 0, cnt = 0;
	char *memspace;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[d])
		d++;

	while (s2[e])
		e++;

	if (n >= e)
		cnt = d + e;
	else
		cnt = d + n;

	memspace = malloc(sizeof(char) * cnt + 1);

	if (memspace == NULL)
		return (NULL);

	e = 0;
	while (f < cnt)
	{
		if (f <= d)
			memspace[f] = s1[f];

		if (f >= d)
		{
			memspace[f] = s2[e];
			e++;
		}
		f++;
	}
	memspace[f] = '\0';
	return (memspace);
}

