#include "main.h"

/**
 * clear_bit - sets the bit value to 0 at given index
 * @n: pointer to binary number to modify
 * @index: postion of bit to change to 0 (starts at 0)
 *
 * Return: 1 or -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (0);
}
