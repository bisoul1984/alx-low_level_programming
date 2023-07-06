#include "main.h"
/**
 * _puts_recursion - function puts();
 * @s: input
 * Return: Always 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		puts(*s);
		_puts_recursion(s + 1);
	}

	else
		putchar('\n');
}

