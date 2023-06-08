#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string variable
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int x;
	int ct = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		ct++;
	}
	return (ct);
}
