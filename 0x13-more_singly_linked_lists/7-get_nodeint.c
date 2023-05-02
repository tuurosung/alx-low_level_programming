#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 *
 * @head: the head node of the linked list
 *
 * @index: the index of the node, starting at 0;
 *
 * Return: NULL if node does not exist
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* initialize variables */
	unsigned int n;

	/* loop through till match is found */

	for (n = 0; n < index; n++)
	{
		/* check for NULL */
		if (head == NULL)
			return (NULL);

		head = head->next;

	}

	return (head);

}
