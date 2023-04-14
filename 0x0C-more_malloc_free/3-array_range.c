#include "main.h"
#include <stdlib.h>


/**
 * array_range - function that creates an array of integers
 *
 * @min: the minimum number
 * @max: the maximum number
 *
 * Return: the pointer to the newly created arrayor NULL if fail
 */

int *array_range(int min, int max)
{
	/* initialize variables */

	int *new_array;
	int i;
	int arr_size;

	/* check if min is > than max */
	if (min > max)
		return (NULL);

	/* get array size */
	arr_size = max - min + 1;

	/* allocate memory */
	new_array = malloc(sizeof(int) * arr_size);

	/* check for NULL */
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < arr_size; i++)
		new_array[i] = min++;

	return (new_array);
}
