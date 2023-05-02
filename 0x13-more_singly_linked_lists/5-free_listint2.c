#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 *
 * @head: a pointer to the head of the list
 *
 */

void free_listint2(listint_t **head)
{
	/* initialize variables */
	listint_t *holder;

	/* check for NULL */
	if (head == NULL)
		return;

	while (*head)
	{
		/* pass the next node to holder */
		holder = (*head)->next;

		free(*head);

		*head = holder;
	}

	/* pass NUll to head */
	head = NULL;
}
