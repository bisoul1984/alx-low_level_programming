#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of linked list
 * @head: double pointer to list_t list
 * @str: new string to add
 *
 * Return: address of new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new_n = malloc(sizeof(list_t));
	if (!new_n)
	{
		return (NULL);
	}
	new_n->str = strdup(str);
	new_n->len = len;
	new_n->next = (*head);
	(*head) = new_n;

	return (*head);
}


