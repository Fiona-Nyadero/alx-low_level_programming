#include "main.h"

/**
 * set_bit - sets the bit value to 1 at given index
 * @n: pointer to binary number to modify
 * @index: position to change bit value to 1 (starts at 0)
 *
 * Return: 1 or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
