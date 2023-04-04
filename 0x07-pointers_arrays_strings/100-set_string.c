#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer
 * @to: value
 *
 * Return: Always 0.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
