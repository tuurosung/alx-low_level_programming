#include "function_pointers.h"


/**
 * int_index - function that searches for an integer
 *
 * @array: a given array of integers
 * @size: the size of the given array  of integers
 * @cmp: a pointer to the function to be be used to compare values
 *
 * Return: returns the index of the first element or -1 if otherwise
 *
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	/* initialize variables */
	int i;

	/* check for NULL */
	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
