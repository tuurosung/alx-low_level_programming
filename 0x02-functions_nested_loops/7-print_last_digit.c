#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 *
 * Description: when called, the main function returns
 * the last digit of a given number
 * Return: the last digit of a given number
 *
 */
int print_last_digit(int n)
{
	/* get the last number using mod */

	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -1 * last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
