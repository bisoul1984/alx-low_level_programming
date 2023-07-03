#include "main.h"

/**
 *_memcpy - function that copies memory address
 *@dest: memory where stored
 *@src: memory where to copy
 *@n: number of bytes
 *
 *Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
