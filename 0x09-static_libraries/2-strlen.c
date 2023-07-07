#include "main.h"

/**
 * _strlen - return length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int sum = 0;

	while (*s != '\0')
	{
		sum++;
		s++;
	}
	return (sum);
}
