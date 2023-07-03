#include "main.h"

/**
 * _strchr -  a function that locates a character in a string
 * @s: input
 * @c: input
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int x;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
		return (0);
	}
}
