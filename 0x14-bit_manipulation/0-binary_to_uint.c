#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary string characters of 1s and 0s
 *
 * Return: Unsigned int or 0 if string b != 0s || 1s
 * OR if string b == NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int numb;
	unsigned int bazz_10 = 0;

	if (!b)
		return (0);

	for (numb = 0; b[numb]; numb++)
	{
		if (b[numb] < '0' || b[numb] > '1')
			return (0);

		bazz_10 = 2 * bazz_10 + (b[numb] - '0');
	}

	return (bazz_10);
}
