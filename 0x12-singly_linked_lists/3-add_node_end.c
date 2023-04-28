#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the beginning of a list
 *
 * @head: pointer to the head of the given list
 * @str: a string that needs to be duplicated and added to be the head
 *
 * Return: address to the new element or NULL if failed
 *
 */


list_t *add_node_end(list_t **head, const char *str)
{
	/*initialize variables */
	char *copy;
	int i;
	list_t *newStr, *end;

	newStr = malloc(sizeof(list_t));

	/* check for NULL */
	if (newStr == NULL)
		return (NULL);

	copy = strdup(str);

	if (copy == NULL)
	{
		free(newStr);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	newStr->str = copy;
	newStr->len = i;
	newStr->next = NULL;

	if (*head == NULL)
		*head = newStr;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;

		end->next = newStr;
	}

	return (*head);
}
