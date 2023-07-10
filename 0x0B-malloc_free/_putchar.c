#include "main.h"
#include <unistd.h>

/**
 * _putchar - wirte character c to stdout
 * @c: the character to be printed
 *
 * Return: on success 1
 * on error -1 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
