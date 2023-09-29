#include "main.h"

/**
 * get_endianness - check if a machine is big or little endian
 * Return: 0 for big or 1 for little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
