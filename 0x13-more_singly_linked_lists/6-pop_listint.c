#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a list
 *
 * @head: the address of the head of the list
 *
 * Return: 0 if list is empty
 *
 */

int pop_listint(listint_t **head)
{
	/* initialize variables */
	listint_t *holder;

	int result;

	/* check for NULL */
	if (*head == NULL)
		return (0);

	holder = *head;
	result = (*head)->n;
	*head = (*head)->next;

	free(holder);

	return (result);

}
