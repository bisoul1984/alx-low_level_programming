#include "main.h"

/**
 * _strlen_recursion - return the length of string
 * @s: The string to be measured
 *
 * Return: the length of string.
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s)
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}

	return (sum);
}
