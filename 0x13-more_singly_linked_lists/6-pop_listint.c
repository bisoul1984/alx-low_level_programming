#include "lists.h"

/**
 * pop_listint - delete head node of linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: data inside elements that was deleted or 0 if it 
 * is null
 */

int pop_listint(listint_t **head)
{
	listint_t _inser;
	int number;

	if (!head || !*head)
		return (0);
	number = (*head)->n;
	inser = (*head)->next;
	free(*head);
	*head = inser;

	return (number);
}
