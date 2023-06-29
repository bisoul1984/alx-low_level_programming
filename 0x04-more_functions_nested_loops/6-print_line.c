#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number fo time char to be printed
 */

void print_line(int n)
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
