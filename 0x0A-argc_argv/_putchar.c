#include <stdio.h>
#include "main.h"

/**
 * _putchar - write character c to stdout
 * @c: charcter to be printed
 *
 * Return: 1 on success and 
 * 0n error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
