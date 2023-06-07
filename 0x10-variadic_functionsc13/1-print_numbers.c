#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string between numbers
 * @n: number of integers passed to fx
 * @...: variable no. of parameters to sum
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int list;

	va_start(num, n);

	for (list = 0; list < n; list++)
	{
		printf("%d", va_arg(num, int));

		if (list != (n - 1) && separator != NULL)

		printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
