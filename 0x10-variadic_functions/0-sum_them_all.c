#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum of parameters
 * @n: number of parameters passed to function
 * @...: a variable number of parameters to calculate sum
 *
 * Return: if n == 0 zero or sum of all parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	var_list pa;
	unsigned int x, sum = 0;

	va_start(pa, n);

	for (x = 0; x < n; x++)
		sum += va_arg(pa, int);

	va_end(pa);
	return (sum);
}
