#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition
 * @a: integer 1
 * @b: integer 2
 *
 * Return: (a + b)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: integer 1
 * @b: integer 2
 *
 * Return: (a - b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: integer 1
 * @b: integer 2
 *
 * Return: (a * b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: integer 1
 * @b: integer 2
 *
 * Return: (a / b)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder
 * @a: integer 1
 * @b: integer 2
 *
 * Return: (a + b)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
