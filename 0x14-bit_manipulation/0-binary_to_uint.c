#include "main.h"

/**
 * binary_to_uint - convvert binary number to unsigned int
 * @b: string containing binary number
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decimal_val = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[x] - '0');
	}
	return (decimal_val);
}
