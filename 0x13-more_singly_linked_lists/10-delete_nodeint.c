#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node in a linkded list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 if success or -1, fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *inser = *head;
	listint_t *now = NULL;
	unsigned int x;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index ==)
	{
		*head = (*head)->next;
		free(inser);
		return (1);
	}
	while (x < index - 1)
	{
		if (!inser || !(inser->next))
		{
			return (-1);
		}
		inser = inser->next;
		x++;
	}
		now = inser->next;
		inser->next = now->next;
		free(now);
		return (1);
}
