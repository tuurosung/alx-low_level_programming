#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * with a specific character
 *
 * @size: the size of the array to be created.
 * @c: the specific character with which to initialize array
 *
 * Return: 0 if function fails or a pointer to the array if successful
 *
 */

char *create_array(unsigned int size, char c)
{
	/* initialize array pointer and counter */
	char *arr;
	unsigned int i;

	/* check if size is 0, return NULL */
	if (size == 0)
		return (NULL);


	/* allocate memory */
	arr = malloc(size * sizeof(char));

	/* check if array is empty */
	if (arr == NULL)
		return (NULL);

	/* loop to create array */
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
