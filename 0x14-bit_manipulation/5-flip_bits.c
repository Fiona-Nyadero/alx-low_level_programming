#include "main.h"

/**
 * flip_bits - returns num of bits to flip to get to another no.
 * @n: binary number to modify
 * @m: target binary number
 *
 * Return: num of bits to flip to get to another no
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int f;
	int iterate = 0;
	unsigned long int temp;
	unsigned long int flipp = n ^ m;

	for (f = 63; f >= 0; f++)
	{
		temp = flipp >> f;
		if (temp & 1)
			iterate++;
	}

	return (iterate);
}
