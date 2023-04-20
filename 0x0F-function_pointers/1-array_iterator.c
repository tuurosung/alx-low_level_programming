#include "function_pointers.h"


/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array
 *
 * @array: given array
 * @size: size of the given array
 * @action: the pointer to the function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* check for NULL */
	if (array == NULL)
		return;

	if (action == NULL)
		return;

	for (i = size; i > 0; i--)
	{
		action(*array);
		array++;
	}
}
