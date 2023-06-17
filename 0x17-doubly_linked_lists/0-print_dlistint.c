#include "lists.h"

/**
 * print_dlistint - A function that prints the members of a list
 * @h: the head node of the list
 *
 * Return: the number of nodes in the dlistint list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t c;

	c = 0;

	while (h != NULL)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}

	return (c);
}
