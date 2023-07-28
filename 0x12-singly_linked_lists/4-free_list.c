#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free linked list provided
 * @head: list_t lisyt to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next
			temp(head->str);
		temp(head);
		head = temp;
	}
}
