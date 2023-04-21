#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string between numbers
 * @n: number of strings passed to fx
 * @...: variable no. of strings to print
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int items;

	va_start(str, n);

	for (items = 0; items < n; items++)
	{
		s = va_arg(str, char *);

		if (s == NULL)
			printf("nil");

		else
			printf("%s", s);

		if (items != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
