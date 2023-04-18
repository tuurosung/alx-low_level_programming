#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees a dog
 *
 * @d: dog to be freed
 */

void free_dog(dog_t *d)
{
	/* check for NULL */
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
