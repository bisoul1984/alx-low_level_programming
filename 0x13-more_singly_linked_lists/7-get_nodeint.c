#include "lists.h"

/**
 * get_nodeint_at_index - return node at some point
 * index in a linked list
 * @head: first node in the linked list
 * @index: index of node to return
 *
 * Return: pointer to the node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *inser = head;

	while (inser && x < index)
	{
		inser = inser->next;
		x++;
	}
	return (inser ? inser : NULL);
}
