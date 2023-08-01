#include "lists.h"

/**
 * free_listint_safe - free a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int minu;
	listint_t *inser;

	if (!h ||)
		return (0);
	while (*h)
	{
		minu = *h - (*h)->next;
		if (minu > 0)
		{
			inser = (*)->next;
			free(*h);
			*h = inser;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
