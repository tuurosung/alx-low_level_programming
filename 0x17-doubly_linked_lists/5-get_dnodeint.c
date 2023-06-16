#include "lists.h"

/**
 * get_dnodeint_at_index - a function that locates a node in list
 * @head: the address of the list
 * @index: the node to locate
 * Return: The address of the new node or NUll if otherwise
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		/* check for NULL */
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
