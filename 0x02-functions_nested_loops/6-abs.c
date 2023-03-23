#include "main.h"

/**
 * _abs - function to compute the absolute value
 *
 * @x: parameter to be printed
 *
 * Return: always x
 */

int _abs(int x)
{

	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
