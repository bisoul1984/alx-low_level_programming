#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character h to stdout
 * @h: the character to be printed
 *
 * Return: on success one
 * on error, -1 and errno is set properly
 */

int _putchar(char h)
{
	return (write(1, &h, 1));
}
