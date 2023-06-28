#include "main.h"

/**
 * puts2 - reverse a string
 * @str: string
 * Return: prints every other character of a string
 */
void puts2(char *str)
{
	int sum = 0;
	int x = 0;
	char *t = str;
	int y;

	while (*t != '\0')
	{
		t++;
		sum++;
	}
	x = sum - 1;

	for (y = 0; y <= x; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
