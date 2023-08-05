#include "main.h"

/**
 * flip_bits - count number of bites to be changed
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int now;
	unsigned long int summary = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		now = summary >> x;
		if (now & 1)
		{
			count++;
		}
	}
	return (count);
}
