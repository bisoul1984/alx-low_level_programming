#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocate memory by using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
