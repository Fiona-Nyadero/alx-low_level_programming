#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers\n
 * @separator: string between numbers(, )
 * @n: number of integers passed to the fx
 * @...: variable no. of parameters to print
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int list;

	va_start(nums, n);

	for (list = 0; list < n; list++)
	{
		printf("%d", va_arg(nums, int));

		if (list != (n - 1) && separator != NULL)

		printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
