#include "main.h"

/**
 * flip_bits - counts the number of bits to be changed
 * get from one number to another
 * @n: first number
 * @m: second numbe
 *
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int now;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		now = exclusive >> x;
		if (now & 1)
			count++;
	}
	return (count);
}
