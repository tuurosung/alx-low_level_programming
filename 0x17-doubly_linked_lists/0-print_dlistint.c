#include "lists.h"

/**
 * print_dlistint - A function that prints the members of a list
 * @h: the head node of the list
 *
 * Return: the number of nodes in the dlistint list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	/* check for NULL */
	if (h == NULL)
		return (c);

	while (h->prev != NULL)
		h=h->prev;

	while (h)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (c);
}
