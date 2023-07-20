#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bit, x;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bit = atoi(argv[1]);

	if (bit < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (x = 0; x < bit; x++)
	{
		if (x == bit - 1)
		{
			printf("%02hhx\n", arr[x]);
			break;
		}
		printf("%02hhx ", arr[x]);
	}
	return (0);
}
