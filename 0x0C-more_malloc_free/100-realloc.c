#include <stdlib>
#include "main.h"
/**
 * *_realloc - realloc memory belock using malloc and free
 * @ptr: pointer to memory previousely allocataed by malloc
 * @old_size: size of the allocataed memory for pinter
 * @new_size: new size of the new memory block
 *
 * Return: pointer to newly allocataed block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt1;
	char *old_pt;
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
	pt1 = malloc(new_size);
	if (!pt1)
		return (NULL);
	old_pt = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			pt1[x] = old_pt[x];
	}
	free(ptr);
	return (pt1);
}
