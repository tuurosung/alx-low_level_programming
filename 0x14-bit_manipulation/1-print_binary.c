#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number
 *
 * @n: is the given number
 *
 */

void print_binary(unsigned long int n)
{
	/* check if number is valid */
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
