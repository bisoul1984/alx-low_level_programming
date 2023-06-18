#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char alphabet[25] = "abcdfghijklmnoqrstuvwxyz";
	int i;

	for (i = 0; i < 25; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
