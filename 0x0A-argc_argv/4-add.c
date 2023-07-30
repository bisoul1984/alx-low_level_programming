#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * check_num - check  string that are degit
 * @str: string array
 *
 * Return: always 0
 */

int check_num(char *str)
{
	unsigned int sum;

	sum = 0;
	while (sum < strlen(str))
	{
		if (!isdigit(str[sum]))
		{
			return (0);
		}
		sum++;
	}
	return (1);
}

/**
 * main - print name of program
 * @argc: count arguments
 * @argv: number of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum;
	int str_int;
	int count = 0;

	sum = 1;

	while (sum < argc)
	{
		if (check_num(argv[sum]))
		{
			str_int = atoi(argv[sum]);
			count += str_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		sum++;
	}
	printf("%d\n", count);
	return (0);
}
