#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: value 1 to swap
 * @b: value 2 to swap
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
