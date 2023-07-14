#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fill memory using contsant byte
 * @s: memory area to be filled
 * @b: character to be copied
 * @n: number of times to be copied b
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}

/**
 * *_calloc - allocate memory for array
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: pointer to be allocated to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
