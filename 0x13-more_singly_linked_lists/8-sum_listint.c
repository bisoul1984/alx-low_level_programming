#include "lists.h"

/**
 * sum_listint - calculate sum of all data in a listint_t
 * @head: first node in the linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *inser = head;

	while (inser)
	{
		sum += inser->n;
		inser = inser->next;
	}
	return (sum);
}
