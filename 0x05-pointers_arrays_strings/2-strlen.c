#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: string
 * Return:length
 */
int _strlen(char *s)
{
	int sum;

	while (*s != '\0')
	{
		sum++;
		s++;
	}
	return (sum);
}

