#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together
 * @s1: input one to concatenate
 * @s2: input two to concatenate
 * Return: concatenate of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	conc = malloc(sizeoff(char) * (x + y + 1));

	if (conc == NULL)
		return (NULL);

	x = y = 0;
	while (s1[x] != '\0')
		conc[x] = s1[x]
			x++;
	while (s2[y] != '\0')
		conc[x] = s2[y];
	x++, y++;
	conc[x] = '\0';

	return (conc);
}


