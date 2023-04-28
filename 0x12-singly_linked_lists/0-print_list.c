#include "list.h"
#include <stdio.h>


/**
 * print_list - a function that prints all the elements of list_t
 *
 * @h: the list of params
 *
 * Return: the number of nodes to be printed
 *
 */

size_t print_list(const list_t, *h)
{
	/* initialize variables */
	size_t nNodes = 0;

	/* loop to check validity */
	while (h)
	{
		/* check for NULL */
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else

			printf("[%d] %s\n", h->len, h->str);

		nNodes++;

		h = h->next;
	}

	return (nNodes);
}
