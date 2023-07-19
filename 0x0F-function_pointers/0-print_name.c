#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - to print a name using pointer to function
 * @name: string to add
 * @f: pointer to a function
 * Return: nothing
 */

void print_name(char *name, void (*f)(chaar *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
