#include "main.h"

/**
 * char *_strcpy - function that copies string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + 1) != '\0')
	{
		x++;
	}
	for (; y < 1; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
