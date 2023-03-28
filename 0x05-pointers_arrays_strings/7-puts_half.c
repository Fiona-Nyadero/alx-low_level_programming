#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string variable
 *
 * Return: always 0
 */

void puts_half(char *str)
{
	int x;
	int ct = 0;

	for (x = 0; str[x] != '\0'; x++)
		ct++;
	for (x = (ct + 1) / 2; x < ct; x++)
		_putchar(str[x]);
	_putchar('\n');
}
