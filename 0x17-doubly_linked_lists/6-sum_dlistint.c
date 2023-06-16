#include "lists.h"

/**
 * sum_dlistint - a function that calculates the sum of a list
 * @head: the address of the list
 * Return: The address of the new node or NUll if otherwise
*/

int sum_dlistint(dlistint_t *head)
{
	/* initialize variables */
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
