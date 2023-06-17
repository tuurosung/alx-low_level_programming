#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes a node from a list
 *
 * @head: an address to the head of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if successful or -1 if otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *holder = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (holder == NULL)
			return (-1);
		holder = holder->next;
	}

	if (holder == *head)
	{
		*head = holder->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		holder->prev->next = holder->next;
		if (holder->next != NULL)
			holder->next->prev = holder->prev;
	}

	free(holder);
	return (1);
}
