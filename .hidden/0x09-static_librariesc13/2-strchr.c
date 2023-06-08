#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 * @c: character to locate
 *
 * Return: Always 0 (success)
 * or NULL if not
 */

char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return  (s + x);
	}
	return (NULL);
}
