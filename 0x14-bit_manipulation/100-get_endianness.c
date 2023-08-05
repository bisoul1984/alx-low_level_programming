#include "main.h"

/**
 * get_endianness - check if a machine is small or big
 * Return: 0 for big or 1 for small
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *ch = (char *) &x;

	return (*ch);
}
