#include "main.h"

/**
 * _memset - fill a block of memory with a value
 * @s: starting address of memory to be filled
 * @b: the required value
 * @n: number of bytes to be change
 *
 * Return: changed array with new value for n bytes
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
