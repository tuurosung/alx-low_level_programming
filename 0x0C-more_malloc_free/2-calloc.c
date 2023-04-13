#include "main.h"
#include <stdlib.h>


/**
 * _calloc - function that allocates memory for an array using malloc
 *
 * @nmemb: number of elements in the array
 * @size: number of bytes for each array element
 *
 * Return: pointer to allocated memory, or NULL if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* initialize variables and counter */
	void *m;
	unsigned int i;
	char *holder;

	/* check for zeros */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory */
	m = malloc(size * nmemb);

	/* check for NULL */
	if (m == NULL)
		return (NULL);

	holder = m;

	for (i = 0; i < (size * nmemb); i++)
		holder[i] = '\0';

	return (m);
}
