#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read text file and print
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: 0 when function fial or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x;
	ssize_t y;
	ssize_t z;
	char *buffer;

	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	z = read(x, buffer, letters);
	y = write(STDOUT_FILENO, buffer, z);

	free(buffer);
	close(x);
	return (y);
}
