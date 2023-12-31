#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers next to  a new line
 * @separator: string to be printed in between numbers
 * @n: number of intigers passed to function
 * @...: variable numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int x;

	va_start(num, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(num, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
