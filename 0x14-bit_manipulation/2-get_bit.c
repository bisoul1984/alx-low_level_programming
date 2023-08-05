#include "main.h"

/**
 * get_bit - return value of bit at an index in a decimal number
 * @n: number to be searched
 * @index: index of bites
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bi_value;

	if (index > 63)
	{
		return (-1);
	}

	bi_value = (n >> index) & 1;
	return (bi_value);
}
