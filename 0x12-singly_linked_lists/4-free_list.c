#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free linked list provided
 * @head: list_t lisyt to be freed
 */

void free_list(list_t *head)
{
	list_t *fre;

	while (head)
	{
		fre = head->next;
		free(head->str);
		free(head);
		head = fre;
	}
}
