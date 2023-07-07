#include "main.h"

/**
 * _isalpha - check alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter or 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
