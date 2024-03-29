#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 *
 * @d: new instance of struct dog
 *
 */

void print_dog(struct dog *d)
{
	/*check for NULL*/
	if (d == NULL)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if (d->age >= 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
