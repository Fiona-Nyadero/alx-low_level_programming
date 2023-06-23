#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings + \n
 * @separator: string between strings (, )
 * @n: number of strings passed to fx
 * @...: variable no. of strings to print
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *a;
	unsigned int items;

	va_start(strs, n);

	for (items = 0; items < n; items++)
	{
		a = va_arg(strs, char *);

		if (a == NULL)
			printf("(nil)");

		else
			printf("%s", a);

		if (items != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(strs);
}
