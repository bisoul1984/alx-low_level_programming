#include "main.h"

/**
 * main - checks for a digit
 * @c: character to be checked
 *
 * Return: Always 0.
 */
int _isdigit(int h)
{
	if (h >= '0' && h <= '9')
	{
		return (1);
	}
	else
		return (0);
}

