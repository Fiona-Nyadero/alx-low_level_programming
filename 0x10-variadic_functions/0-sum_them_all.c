#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters passed to fx
 * @...: variable no. of parameters to sum
 *
 * Return: 0 if n is 0
 * else the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list varfun;
	unsigned int z, summ = 0;

	va_start(varfun, n);

	for (z = 0; z < n; z++)
		summ += va_arg(varfun, int);

	va_end(varfun);

	return (summ);
}
