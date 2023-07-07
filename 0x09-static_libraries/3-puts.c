#include "main.h"

/**
 * _puts - print string followed by new line
 * @str: string to be printed
 */

void _puts(char *str)
{
	while(char *str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
