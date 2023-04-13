#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: amount of memory in bytes to be allocated
 *
 * Return: a pointer to the allocated memory or 98 if failed
 */

void *malloc_checked(unsigned int b)
{
	/* allocate memory and pass to pointer */
	void *m = malloc(b);

	/* check if malloc failed for NULL */
	if (m == NULL)
		exit(98);

	/* if successful */
	return (m);
}
