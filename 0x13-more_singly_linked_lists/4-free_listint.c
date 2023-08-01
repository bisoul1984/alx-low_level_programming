#include "lists.h"

/**
 * free_listint - free linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *inser;

	while (head)
	{
		inser = head->next;
		free(head);
		head = inser;
	}
}
