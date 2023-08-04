#include "main.h"
#include <unistd.h>

/**
 * _putchar - write char c to stdout
 * @c: character to be printed
 *
 * Return: 1 on success or -1 on error
 */

int _putcahr(char c)
{
	return (write(1, &c, 1));
}
