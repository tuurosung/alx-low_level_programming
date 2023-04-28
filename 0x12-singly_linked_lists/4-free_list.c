#include "lists.h"
#include <stdlib.h>


/**
 * free_list - a function that frees a list_t list
 *
 * @head: a pointer to the list in list_t
 *
 */

void free_list(list_t *head)
{
	/* initialize variables */

	list_t *holder;

	while (head)
	{
		holder = head->next;
		free(head->str);
		free(head);

		head = holder;
	}
}
