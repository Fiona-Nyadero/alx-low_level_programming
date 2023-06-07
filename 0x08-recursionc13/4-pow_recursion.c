#include "main.h"

/**
 * _pow_recursion - returns x raised to power of y
 * @x: variable number 1
 * @y: variable number 2
 *
 * Return: x raised to power of y
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
