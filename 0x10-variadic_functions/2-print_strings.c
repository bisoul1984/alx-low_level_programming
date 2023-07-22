#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything
 * @format: types of arguments passed
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *y, *z = "";

	va_list t;

	va_start(t, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", z, va_arg(t, int));
					break;
				case 'i':
					printf("%s%d", z, va_arg(t, int));
					break;
				case 'f':
					printf("%s%f", z, va_arg(t, double));
					break;
				case 's':
					y = va_arg(t, char *);
					if (!y)
						y = "(nil)";
					printf("%s%s", z, y);
					break;
				default:
					x++;
					continue;
			}
			z = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(t);
}
