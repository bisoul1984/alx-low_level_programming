#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
		char *new;
		int x, y = 0;

		if (str == NULL)
		{
			return (NULL);
		}
		X = 0;
		while (str[x] != '\0')
			x++;
		new = malloc(sizeof(char) * (x + 1));

		if (new == NULL)
			return (NULL);
		for (y = 0; str[y]; y++)
			new[y] = str[y];
		return (new);
}
