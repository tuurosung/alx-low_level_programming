#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1
 *
 * @n: the address of the bit
 * @index: the index starting from 0
 *
 * Return: 1 if it worked or -1 if an error occurred
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* check for size */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);

}
