#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position
 *
 * @head: the address to the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the value to be inserted as the new node
 *
 * Return: the address of the new node or NULL if failed
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* initialize variables */
	listint_t *newStr;
	listint_t *duplicate = *head;
	unsigned int Node;

	/* assign memory */
	newStr = malloc(sizeof(listint_t));

	/* check for NULL */

	if (newStr == NULL)
		return (NULL);

	newStr->n = n;

	if (idx == 0)
	{
		newStr->next = duplicate;
		*head = newStr;
		return (newStr);
	}

	for (Node = 0; Node < (idx - 1); Node++)
	{
		/* check for NULL */
		if (duplicate == NULL || duplicate->next == NULL)
			return (NULL);

		duplicate = duplicate->next;
	}

	newStr->next = duplicate->next;
	duplicate->next = newStr;

	return (newStr);

}
