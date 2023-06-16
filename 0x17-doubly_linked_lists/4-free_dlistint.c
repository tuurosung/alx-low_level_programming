#include "lists.h"

/**
 * free_dlistint - a function that frees  a dlistint
 * @head: the address of the list
 * Return: The address of the new node or NUll if otherwise
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder;

	while (head)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
