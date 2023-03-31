#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: integer to be printer
 *
 */
void print_number(int n)
{
	unsigned int number = n;

	/* Get the absolute value of n, (abs) */
	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	/* if the number isn't divisible by 10 */
	if ((number / 10) > 0)
		print_number(number / 10)

	_putchar((num % 10) + '0');
}
