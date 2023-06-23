#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints everything
 * @format: lists all types passed to fx
 * @...: variable no. items to print
 *
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	int z = 0;
	char *strs, *sprtr = "";
	va_list ls;

	va_start(ls, format);
	if (format)
	{
		while (format[z])
		{
			switch (format[z])
			{
				case 'c':
					printf("%s%c", sprtr, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sprtr, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sprtr, va_arg(ls, double));
					break;
				case 's':
					strs = va_arg(ls, char *);
					if (!strs)
						strs = "(nil)";
					printf("%s%s", sprtr, strs);
					break;
				default:
					z++;
					continue;
			}
			sprtr = ", ";
			z++;
		}
	}
	printf("\n");
	va_end(ls);
}
