#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 * return: void
 */
void print_numbers(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		_putchar(h);
	}
	_putchar('\n');
}
