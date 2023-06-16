#include "lists.h"

/**
 * add_dnodeint - a function that adds a node to a dlistint
 * @head: the address of the list
 * @n: the node  to be added
 * Return: The address of the new node or NUll if otherwise
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tail;

	new_node = malloc(sizeof(dlistint_t));

	/* check for NULL */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;

	tail->next = new_node;
	new_node->prev = tail;

	return (new_node);
}
