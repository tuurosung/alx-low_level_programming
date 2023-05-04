#include "main.h"


/**
 * get_bit - a function that returns the value of a given index;
 *
 * @n: the given bit
 * @index: is the index, starting 0 of the bit
 *
 * Return: the value of the bit at index or -1 failed
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);

}
