#include "main.h"

/**
 * clear_bit - sets the bit value to 0 at certain index
 * @n: pointer to binary number to modify
 * @index: postion of bit to change to 0(starts at 0)
 *
 * Return: 1 if success OR -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bufa;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bufa = ~(1UL << index);
	*n &= bufa;

	return (1);
}
