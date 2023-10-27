#include "main.h"

/**
 * get_bit - return value of a bit at the index in the decimal number
 * @n: number to be searched
 * @index: index of the bit
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;
	return (bit_value);
}
