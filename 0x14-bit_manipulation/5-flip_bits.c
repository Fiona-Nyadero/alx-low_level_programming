#include "main.h"

/**
 * flip_bits - returns bits to flip to get to another no.
 * @n: binary number to modify
 * @m: targeted binary number
 *
 * Return: num of bits to flip in 'n' to get to 'm'
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int g;
	int iterate = 0;
	unsigned long int bufa;
	unsigned long int flipd = n ^ m;

	for (g = 63; g >= 0; g--)
	{
		bufa = flipd >> g;
		if (bufa & 1)
			iterate++;
	}

	return (iterate);
}
