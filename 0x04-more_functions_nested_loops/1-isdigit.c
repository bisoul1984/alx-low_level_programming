#include "main.h"
#include <stdio.h>

/**
 * main - checks for a digit
 *
 * Return: Always 0.
 */

int main(void)
{
	char h;

	h = 'A';
	printf("%h: %d\n", h, _isupper(h));
	h = 'a';
	printf("%h: %d\n", h, _isupper(h));
	return (0);
}
