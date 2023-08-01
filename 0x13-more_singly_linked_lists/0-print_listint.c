#include "lists.h"

/**
 * print_listint - print all elements of linked list
 * @h: linked list of type
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->m);
		number++;
		h = h->next;
	}
	return (number);
}