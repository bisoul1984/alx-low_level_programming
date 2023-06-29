#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		if (!(h == '2' || h == '4'))
			_putchar(h);
	}
	_putchar('\n');
}
