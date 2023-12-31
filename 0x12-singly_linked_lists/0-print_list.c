#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of linkded list
 * @h: pointer to the list_t print
 *
 * Return: number of nodes to be printed
 */


size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		x++;
	}
	return (x);
}
