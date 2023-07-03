#include "main.h"

/**
 * _strpbrk - a function that searches a string for bytes
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
			s++;
		}
		return ('\0');
	}
}
