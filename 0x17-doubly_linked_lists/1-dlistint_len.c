#include "lists.h"

/**
 * dlistint_len - A function that returns the length of a list
 * @h: the head node of the list
 *
 * Return: the number of nodes in the dlistint list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}

	return (c);
}
