#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a node in a list
 * @h: the address of the list
 * @idx: the pointer to the point of insertion
 * @n: the element to be inserted
 *
 * Return: The address of the new node or NUll if otherwise
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, n)
{
	dlistint_t *holder = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		holder = holder->next;
		if (holder == NULL)
			return (NULL);
	}

	if (holder->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = holder;
	new->next = holder->next;
	holder->next->prev = new_node;
	holder->next = new;

	return (new_node);
}
