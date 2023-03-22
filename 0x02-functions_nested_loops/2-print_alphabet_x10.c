#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always 0;
 */

void print_alphabet_x10(void)
{
	int t;
	char y;

	for (t = 1; t <= 10; t++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
