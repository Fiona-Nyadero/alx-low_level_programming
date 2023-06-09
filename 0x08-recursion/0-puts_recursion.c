#include "main.h"

/**
 * _puts_recursion - prints a string\n
 * @s: string to print
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;

		_puts_recursion(s);
		return;
	}

	_putchar('\n');
	/*return;*/
}
