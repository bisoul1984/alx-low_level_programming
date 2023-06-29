#include "main.h"
#include <stdio.h>

/**
 * main - checks for a digit
 *
 * Return: Always 0.
 */

int main(void)
{
	char t;

	t = 'A';
	printf("%t: %d\n", t, _isupper(t));
	t = 'a';
	printf("%t: %d\n", t, _isupper(t));
	return (0);
}
