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
	dlistint_t *holder;
	unsigned int c;

	if (head == NULL)
		return (-1);

	c = *head;
	c = 0;

	if (index == 0)
	{
		if (holder == NULL)
			return (-1);

		if (holder->next != NULL)
			(holder->next)->prev = NULL;
		*head = holder->next;
		free(holder);
		return (1);
	}

	while (holder != NULL)
	{
		if (c == index)
			break;
		holder = holder->next;
		c++;
	}

	if (c != index)
		return (-1);

	(holder->prev)->next = holder->next;

	if (holder->next != NULL)
		(current->next)->prev = holder->prev;

	free(holder);

	return (1);
}
