#include "main.h"

/**
 * binary_to_uint -  a function that converts a binary number
 * to an unsigned int
 *
 * @b: the address of the string of binary characters
 *
 * Return: the converted number or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	/* initialize variables */
	unsigned int result = 0;
	unsigned int factor = 1;
	int size;

	/* check for Null */
	if (b == '\0')
		return (0);

	for (size = 0; b[size];)
		size++;

	for (size -= 1; size >= 0; size--)
	{
		/* validate before converting */
		if (b[size] != '0' && b[size] != '1')
			return (0);

		result += (b[size] - '0') * factor;
		factor *= 2;
	}

	return (result);
}
