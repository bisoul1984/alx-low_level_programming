#include "main.h"
#include <unistd.h>

/**
 * _putchar - write characters c to stdout
 * @c: character to be printed
 *
 * Return: 1 on succeess and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
