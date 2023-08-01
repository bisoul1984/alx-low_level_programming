#include "lists.h"

/**
 * free_listint2 - free linked list
 * @head: pointer to the listint_t to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *inser;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		inser = (*head)->next;
		free(*head);
		*head = inser;
	}
	*head = NULL;
}
