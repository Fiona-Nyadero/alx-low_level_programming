#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: no. to print/convert
 *
 * Return: Alwasys 0
 */

void print_binary(unsigned long int n)
{
	int f;
	int iterate = 0;
	unsigned long int temp;

	for (f = 63; f >= 0; f--)
	{
		temp = n >> f;

		if (temp & 1)
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
