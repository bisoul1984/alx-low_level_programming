#include <stdio.h>

/**
 * main - prints possible different combinations of two digits
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int i, t;

	for  (i = 48; i <= 56; i++)
	{
		for (t = 49; t <= 57; t++)
		{
			if (t > i)
			{
				putchar(i);
				putchar(t);
				if (i != 56 || t != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
