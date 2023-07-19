#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - to print each array element to
 * the new
 * @array: array
 * @size: how many element to be printed
 * @action: pointer to print in regular or hex
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	{
		return;
	}
	if (array == NULL || action == NULL)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(array[i]);
	}
}
