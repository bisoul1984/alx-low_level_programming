#include "main.h"

/**
 * clear_bit - set value of a given bit to 0
 * @n: pointer to the number to be changed
 * @index: index of bit to be cleared
 *
 * Return: 1 for success or -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
