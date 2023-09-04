#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print to STDOUT.
 * @filename: text file to be  read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes to be read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t x;
	ssize_t i;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	i = read(fd, buffer, letters);
	x = write(STDOUT_FILENO, buffer, i);

	free(buffer);
	close(fd);
	return (x);
}
