#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns the number of elements in linked list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	/* initialize variables nNodes is number of nodes */

	size_t nNodes = 0;

	while (h)
	{
		nNodes++;
		h = h->next;
	}

	return (nNodes);
}
