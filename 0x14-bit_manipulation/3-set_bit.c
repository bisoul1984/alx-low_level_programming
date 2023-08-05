#include "main.h"

/**
 * set_bit - assign a bit at a give index to 1
 * @n: pointer to the number to be changed
 * @index: index of the bit to be set to 1
 *
 * Return: 1 for success or -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
