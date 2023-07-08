#include "main.h"

/**
 * get_bit - returns the bit value at a given index
 * @n: number to check for bit
 * @index: position of bit to check (starts at 0)
 *
 * Return: bit value at a given index
 * or -1 for error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_x; /* bit value 1 or 0 */

	if (index > 63)
		return (-1);

	bit_x = (n >> index) & 1;

	return (bit_x);
}
