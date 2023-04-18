#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initializes a variable of type struct dog
 *
 * @d: new instance of dog to be initialized
 * @name: name to be assigned
 * @age: age to be assigned
 * @owner: owner to be assigned
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* check for NULL */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
