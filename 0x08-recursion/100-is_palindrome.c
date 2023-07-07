#include "main.h"

int check_plindro(char *s, int x, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check if a string is palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is true and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_palindro(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return length of a string
 * @s: string to claculate length
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindro - check characters recursively
 * @s: string to be checked
 * @x: iterator
 * @len: length of string
 *
 * Return: 1 if palindrom is true or 0 if not
 */

int check_palindro(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
	{
		return (0);
	}
	if (x >= (1))
	{
		return (1);
	}
	return (check_palindro(s, x + 1, len - 1));
}
