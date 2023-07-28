#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add new node at the end of linked list provided
 * @head: double pointer to list_t list
 * @str: string to put in the new node
 *
 * Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
