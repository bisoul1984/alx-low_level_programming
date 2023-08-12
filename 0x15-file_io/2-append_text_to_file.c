#include "main.h"

/**
 * append_text_to_file - append text to end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to add to the end of the file
 *
 * Return: 0 if fails or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, length);

	if (x == -1 || y == -1)
	{
		return (-1);
	}
	close(x);
	return (1);
}
