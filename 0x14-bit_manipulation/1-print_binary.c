#include "main.h"

/**
 * print_binary - converts n' prints a binary representation of a number
 * @n: no. to convert n'print
 *
 * Return: Alwasys 0
 */

void print_binary(unsigned long int n)
{
	int g;
	int iterate = 0;
	unsigned long int buf;

	for (g = 63; g >= 0; g--)
	{
		buf = n >> g;

		if (buf & 1)
		{
			_putchar('1');
			iterate++;
		}
		else if (iterate)
			_putchar('0');
	}

	if (!iterate)
		_putchar('0');
}
