#include "main.h"
#include "main.h"

/**
 * print_array - print n elements of an array
 * @a: array name
 * @n: the number of elements of the array to  be printed
 * Return: a and n input
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < (n - 1); t++)
	{
		printf("%d, ", a[t]);
	}
	if (t == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
