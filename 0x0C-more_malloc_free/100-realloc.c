#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocate memory using malloc and free
 * @ptr: pointer previously allocated by malloc
 * @old_size::  size of allocated memory to pointer
 * @new_size: new size to the newly memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *oldp;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size));
	if (!p1)
		return (NULL);
	oldp = ptr;

	if (new_size < old_size)
		for (x = 0; x < new_size; x++)
			p1[x] = oldp[x];
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			p1[x] = oldp[x];
	}
		free(ptr);
		return (p1);
}
