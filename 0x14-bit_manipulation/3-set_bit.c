#include "main.h"

/**
 * set_bit - sets the bit value to 1 at certain index
 * @n: pointer to binary value to modify
 * @index: position to change bit value to 1 (starts at 0)
 *
 * Return: 1 if success or -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
