#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 *
 * @head: pointer to the head of the list
 * @n: number of nodes to add to the end of the list
 *
 * Return: pointer to the new element or NULL if failed
 *
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* initialize variables */
	listint_t *newStr, *end;

	newStr = malloc(sizeof(listint_t));

	/* check for NULL */
	if (newStr == NULL)
		return (NULL);

	newStr->n = n;
	newStr->next = NULL;

	if (*head == NULL)
		*head = newStr;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;

		end->next = newStr;
	}

	return (*head);
}
