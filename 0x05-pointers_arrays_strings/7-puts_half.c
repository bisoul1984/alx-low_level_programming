#include "main.h"

/**
 * puts_half - print half a string prints
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int x, y, sum;

	sum = 0;

	for (x = 0; str[x] != '\0'; x++)
		sum++;

	y = (sum / 2);
	if ((sum % 2) == 1)
		n = ((sum + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
