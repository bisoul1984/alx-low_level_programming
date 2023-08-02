#include "main.h"

/**
 * _memset - fill memory with specific value
 * @s: begining address of memory to be filled
 * @b: required value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
