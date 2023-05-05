#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip
 *
 * @n: the given number to be flipped
 * @m: the to flip @n to
 *
 *
 * Return: the flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* initialize variables */
	unsigned long int xor n ^ m;
	unsigned long int bits = 0;

	/* loop through as long as condition is met */
	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
