#include "lists.h"

/**
 * free_listint - a function that frees a listint_t
 *
 * @head: an address of the head of the list
 *
 */

void free_listint(listint_t *head)
{
	/* initialize variables */
	listint_t *holder;

	/* loop and free whiles its true */
	while (head)
	{
		/*pass the next node in line to the holder variable */
		holder = head->next;

		free(head);
		head = holder;

	}

}
