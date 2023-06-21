#includ "main.h"

/*
 * print_alphabet_x10 - print alphabet 10 times
 */
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */


void print_alphabet_x10(void)
{
	char letter;
	int i;

	i = 0;

	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
