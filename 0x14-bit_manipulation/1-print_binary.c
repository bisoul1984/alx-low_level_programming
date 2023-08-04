#include "main.h"

/**
 * print_binary - print binary qeuivalent of decimal number
 * @n: number to be print in binary
 */

void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int now;

	for (x = 63; x >= 0; x--)
	{
		now = n >> x;
		if (now & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putcahr('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
