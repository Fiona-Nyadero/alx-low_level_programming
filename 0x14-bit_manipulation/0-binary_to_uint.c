#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to binary string characters 1s and 0s
 *
 * Return: Unsigned int or 0 if string b is not 0s & 1s
 * or if string b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int f;
	unsigned int base_10 = 0;

	if (!b)
		return (0);

	for (f = 0; b[f]; f++)
	{
		if (b[f] < '0' || b[f] > '1')
			return (0);

		base_10 = 2 * base_10 + (b[f] - '0');
	}

	return (base_10);
}
