#include <unistd.h>

/**
 * _putchar - write chracter c to stdout
 * @c: character to be printed
 *
 * Return: on success 1
 * on error -1 and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
