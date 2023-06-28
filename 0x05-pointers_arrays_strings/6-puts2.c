#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 * Return: string in reverse order
 */
void rev_string(char *s)
{
	int sum = 0;
	int x = 0;
	int *t = s;
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
			_putchar(s[0]);
		}
	}
	_putchar('\n');
}
