#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 * Return: string in reverse order
 */
void rev_string(char *s)
{
	char rev = s[0];
	int sum = 0;
	int x;

	while (s[sum] != '\0')
	counter++;
	for (x = 0; x < sum; x++)
	{
		sum--;
		rev = s[x];
		s[x] = s[sum];
		s[sum] = rev;
	}
}

