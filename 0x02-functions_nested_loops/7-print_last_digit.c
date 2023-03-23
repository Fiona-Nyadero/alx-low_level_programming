#include "main.h"

/**
 * print_last_digit - function to print the last digit
 *
 * @y: fuction parameter
 *
 * Return: always z
 */

int print_last_digit(int y)
{
	int z;

	z = y % 10;

	if (y < 0)
		z = -(z);
	_putchar(z + '0');
	return (z);
}
