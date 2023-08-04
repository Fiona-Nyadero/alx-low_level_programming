#include "main.h"

/**
 * get_endianness - checks for endianness
 *
 * Return: 0 for big endian
 * or 1 for little endian
 */

int get_endianness(void)
{
	unsigned int g;
	char *bg_lt = (char *) &g;

	return (*bg_lt);
}
