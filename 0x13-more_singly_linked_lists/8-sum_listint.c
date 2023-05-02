#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data of a list
 *
 * @head: the address to the head of the list
 *
 * Return: return 0 if the list is empty
 *
 */

int sum_listint(listint_t *head)
{
	/* initialize variables */

	int total;

	while (head)
	{
		total += head->n;
		head = head->next;

	}

	return (total);

}
