#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character h to stdout
 * @h: the character to be printed
 *
 * Return: on success 1.
 * on error, -1 to be returned, and errno is set appropraiately.
 */

int _putchar (char h)
{
	return (write(1, &h, 1));
}
