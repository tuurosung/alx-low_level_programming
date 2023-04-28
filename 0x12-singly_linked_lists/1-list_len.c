#include "lists.h"

/**
 * list_len - a function that returns the number of elements linked
 *
 * @h: a given linked list_t list
 *
 * Return: the number of elements in the list h
 *
 */

size_t list_len(const list_t *h)
{
	/* initialize variables */
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);

}
