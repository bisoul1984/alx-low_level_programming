#include <stdlib.h>
#include "main.h"

/**
 * count_word - count number of words in a string
 * @s: string to be evaluated
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, y, z;

	flag = 0;
	z = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			z++;
		}
	}
	return (z);
}

/**
 * **strtow - split a string to words
 * @str: string to be split
 *
 * Return: pointer to an array of string
 * or Null
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int x, y = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (c)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[y] = tmp - c;
				y++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = x;
	}
	matrix[y] = NULL;
	return (matrix);
}
