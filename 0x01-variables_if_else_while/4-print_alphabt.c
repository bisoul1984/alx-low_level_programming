#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 97; j < 123; j++)
	{
		if (j != 101 && j != 113)
		{
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
