#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects right fx to perform
 * @s: operator
 *
 * Return: pointer to function
 * corresponding to the operator
 * OR NULL if s is not specified chars
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (0);
}
