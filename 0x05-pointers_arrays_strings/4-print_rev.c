#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string variable
 *
 * Return: always 0
 */

void print_rev(char *s)
{
	int x;
	int ct = 0;

	for (x = 0; s[x] != '\0'; x++)
		ct++;
	for (x = ct; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
