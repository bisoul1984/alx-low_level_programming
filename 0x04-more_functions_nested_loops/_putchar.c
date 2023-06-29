#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character c
 * @c: the character to be printed
 *
 * Return: on success one
 * On error, -1 is returned, errno is set
 */
int _putchar(char h)
{
	return (write(1, &h, 1));
}

