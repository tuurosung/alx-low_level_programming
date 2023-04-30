#include "lists.h"
#include <stdio.h>


/**
 * print_listint - a function that prints all the elements of a listint_t list
 *
 * @h: pointer to the head of the list
 *
 * Return: nNodes (number of nodes)
 *
 */

size_t print_listint(const listint_t *h)
{
	/* initialize variables; nNodes is number of nodes */
	size_t nNodes = 0;

	/* loop till empty */
	while (h)
	{
		nNodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nNodes);
}
