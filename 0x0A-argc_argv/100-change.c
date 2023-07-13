#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print minimum number of coin to
 * change for amount of money
 * @argc: number of argumnets
 * @argv: array of argumnets
 *
 * Return: 0 (success) and 1 (error)
 */

int main(int argc, char *argv[])
{
	int num, x, resu;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	resu = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0; x < 5 && num >= 0; x++)
	{
		while (num >= coin[x])
		{
			resu++;
			num -= coin[x];
		}
	}
	printf("%d\n", resu);
	return (0);
}
