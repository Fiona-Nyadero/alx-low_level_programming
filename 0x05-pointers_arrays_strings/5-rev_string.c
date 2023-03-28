#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string variable
 *
 * Return: always 0
 */

void rev_string(char *s)
{
	int x;
	int ct = 0;

	for (x = 0; s[x] != '\0'; x++)
		ct++;
	for (x = ct -1; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
