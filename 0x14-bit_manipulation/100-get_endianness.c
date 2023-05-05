#include "main.h"

/**
 * get_endianness - function that checks the endiannes
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	/* initialize variables */
	unsigned int number = 1;
	char *ch = (char *) &number;

	if (*ch)
		return (1);
	else
		return (0);
}
