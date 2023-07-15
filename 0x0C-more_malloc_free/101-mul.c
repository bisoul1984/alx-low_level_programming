#include "main.h"
#include <stdlib>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - check if string contain non-digit character
 * @s: string to be evaluated
 *
 * Return: 0 if non digit is found or 1
 */

int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return ('0');
		i++;
	}
	return (1);
}
/**
 * _strlen - return length of string
 * @s: string to be evaluated
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - handles error for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, x, sum, digit1, digit2, *resu, t = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !digit(s1) || !digit(s2))
		errors();
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2 + 1;
	resu = malloc(sizeof(int) * len);
	if (!resu)
		return (1);
	for (x = 0; x <= len1 + len2; x++)
		resu[x] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		sum = 0;
		for (len2 = strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			sum += resu[len1 + len2 + 1] + (digit1 * digit2);
			resu[len1 + len2 + 1] = sum % 10;
			sum /= 10;
		}
		if (sum > 0)
			resu[len1 + len2 + 1] += sum;
	}
		for (x = 0; x < len - 1; x++)
	{
			if (resu[x])
				t = 1;
			if (t)
				_putchar(resu[x] + '0');
	}
			if (!t)
				_putchar('0');
			_putchar('\n');
			free(resu);
			return (0);
}
