#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 *
 * @head: an address to the head of the given list
 * @index: the index of the node to be deleted
 *
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* initialize variables */
	listint_t *holder;
	listint_t *duplicate = *head;
	unsigned int N;

	/* check for NULL */
	if (duplicate == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(duplicate);
		return (1);
	}

	for (N = 0; N < (index - 1); N++)
	{
		if (duplicate->next == NULL)
			return (-1);

		duplicate = duplicate->next;

	}

	holder = duplicate->next;
	duplicate->next = holder->next;
	free(holder);
	return (1);
}
