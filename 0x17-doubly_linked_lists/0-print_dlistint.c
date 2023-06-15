#include "lists.h"

/**
 * add_dnodeint - a function that adds a node to a dlistint
 * @head: the address of the list
 * @n: the node  to be added
 * Return: The address of the new node or NUll if otherwise
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Initialize variables */
	dlistint_t  *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
