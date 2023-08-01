#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of linked lists
 * @head: pointer to the first element in the linked list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *inser = *head;

	new_n = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new_n->n = n;
	new_n->next - NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	while (inser->next)
		inser = inser->next;
	inser->next = new_n;
	return (new_n);
}
