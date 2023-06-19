#include <stdio.h>

/**
 * main - Prints the lowercase in reverse order.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i < 26; i >= 0; i--)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	retun(0);
}
