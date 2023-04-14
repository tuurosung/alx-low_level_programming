#include "main.h"
#include <stdlib.h>


/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory prev allocated
 * @old_size: previously allocated memory size for ptr in bytes
 * @new_size: the new allocated memory block
 *
 * Return: a pointer to a new memory block or NULL if failed.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* initialize variables and counter */
	void *m;
	unsigned int i;
	char *new_mem;
	char *holder;

	/* check for arguments */
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		m = malloc(new_size);

		/* new_mem cannot be NULL */
		if (m == NULL)
			return (NULL);

		return (m);
	}

	/* if new_size is 0 and pointer is not NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_mem = ptr;

	/* allocate memory */
	m = malloc(sizeof(*new_mem) * new_size);

	/* check for NULL */
	if (m == NULL)
	{
		free(ptr);
		return (NULL);
	}

	holder = m;

	/* loop to create memory block */
	for (i = 0; i < old_size && i < new_size; i++)
		holder[i] = *new_mem++;

	free(ptr);
	return (m);
}
