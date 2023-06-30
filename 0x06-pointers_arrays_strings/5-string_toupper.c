#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @t: pointer
 *
 * Return: t
 */

char *string_toupper(char *t)
{
	int x;

	x = 0;
	while (t[x] != '\0')
	{
		if (t[x] >= 'a' && t[x] <= 'z')
		{
			t[x] = t[x] - 32;
		}
		x++;
	}
	return (t);
}
