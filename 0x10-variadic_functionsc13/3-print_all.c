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
	int x = 0;
	char *str, *sp = "";
	va_list l;

	va_start(l, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sp, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(l, double));
					break;
				case 's':
					str = va_arg(l, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					x++;
					continue;
			}
			sp = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(l);
}
