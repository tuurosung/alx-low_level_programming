#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: an address to the given bit
 * @index: is the index, starting from 0 of the bit
 *
 * Return: 1 if it worked or -1 if failed
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* check for size of bit */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
