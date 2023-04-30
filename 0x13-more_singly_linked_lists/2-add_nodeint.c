#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 *
 * @head: pointer to the head of the list
 * @n: value to be placed in the new node;
 *
 * Return: the address of the new element or NULL if failed
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* initialize variables */
	listint_t *newStr;

	newStr = malloc(sizeof(listint_t));

	/* check for NULL */

	if (newStr == NULL)
		return (NULL);

	newStr->n = n;
	newStr->next = *head;

	return (newStr);
}
